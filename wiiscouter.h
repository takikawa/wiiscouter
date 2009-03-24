#ifndef WIISCOUTER_H
#define WIISCOUTER_H

#include <QtGui/QMainWindow>
#include <QtSql>

#include <wiiuse.h>

#include "scheduledialog.h"

// We only need 6 wiimotes for any FIRST match as of now
#define MAX_WIIMOTES 6

namespace Ui
{
    class WiiScouterClass;
}

class WiiScouter : public QMainWindow
{
    Q_OBJECT

public:
    WiiScouter(QWidget *parent = 0);
    ~WiiScouter();

private:
    Ui::WiiScouterClass *ui;
    QSqlDatabase db;
    void databaseSetup(void);

    wiimote_t **wiimotes;
    void wiimoteSetup(void);

    ScheduleDialog *scheduleDialog;

protected:
    void timerEvent(QTimerEvent *event);

signals:
    void receivedWiimote(void);

private slots:
    void wiimoteButtonHandler();
    void on_actionSchedule_Editor_triggered();
    void on_actionQuit_triggered();
    void on_actionStart_Match_triggered();
    void on_actionFind_Wiimotes_triggered();
};

#endif // WIISCOUTER_H
