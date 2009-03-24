#include "game.h"
#include "wiiscouter.h"
#include "ui_wiiscouter.h"
#include "utility.h"

WiiScouter::WiiScouter(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::WiiScouterClass)
{
    ui->setupUi(this);
    scheduleDialog = new ScheduleDialog();

    wiimoteSetup();
    databaseSetup();
}

WiiScouter::~WiiScouter()
{
    db.close();
    delete ui;
    delete wiimotes;
}

void WiiScouter::wiimoteSetup(void)
{
    wiimotes = wiiuse_init(MAX_WIIMOTES);

    int found = wiiuse_find(wiimotes, MAX_WIIMOTES, 5);

    if (found == 0)
    {
        statusBar()->showMessage(tr("No wiimotes found"));
    }
    else
    {
        statusBar()->showMessage(found + tr(" wiimotes were found and initialized"));
    }
}

void WiiScouter::databaseSetup(void)
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(QDir::homePath() + ".WiiScouter.sqlite");
    bool opened = db.open();

    if (!opened)
    {
        statusBar()->showMessage("Database: " + db.lastError().databaseText() +
                                 " Driver: " + db.lastError().driverText());
    }
}

void WiiScouter::timerEvent(QTimerEvent* timerEvent)
{
    int curTime = ui->matchTimer->intValue();
    curTime++;
    ui->matchTimer->display(curTime);

    switch (curTime)
    {
        case AUTONOMOUS_END:
            ui->gameTabs->setCurrentWidget(ui->autoTab);
            statusBar()->showMessage(tr("Switching to autonomous mode"));
            break;
        case MATCH_END:
            statusBar()->showMessage(tr("Match is over"));
            killTimer(timerEvent->timerId());
            break;
    }
}

void WiiScouter::wiimoteButtonHandler()
{
}

void WiiScouter::on_actionFind_Wiimotes_triggered()
{
    wiimoteSetup();
}

void WiiScouter::on_actionStart_Match_triggered()
{
    startTimer(1000);
    statusBar()->showMessage(tr("Starting match timer"));
}

void WiiScouter::on_actionQuit_triggered()
{
    close();
}

void WiiScouter::on_actionSchedule_Editor_triggered()
{
    scheduleDialog->show();
    scheduleDialog->raise();
    scheduleDialog->activateWindow();
}
