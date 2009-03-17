/********************************************************************************
** Form generated from reading ui file 'wiiscouter.ui'
**
** Created: Wed Mar 11 23:35:49 2009
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_WIISCOUTER_H
#define UI_WIISCOUTER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WiiScouterClass
{
public:
    QAction *actionCommit_to_Database;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionStart_Match;
    QAction *actionNext_Match;
    QAction *actionPrevious_Match;
    QAction *actionGo_to_Match;
    QAction *actionFind_Wiimotes;
    QAction *actionSchedule_Editor;
    QAction *actionQuit;
    QWidget *centralWidget;
    QTabWidget *mainTabs;
    QWidget *setupTab;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QFrame *red3Frame;
    QLabel *label_3;
    QLCDNumber *lcdNumber_2;
    QFrame *red2Frame;
    QLabel *label_2;
    QLCDNumber *lcdNumber;
    QFrame *red1Frame;
    QLabel *label;
    QLCDNumber *red1Number;
    QFrame *blue2Frame;
    QLCDNumber *lcdNumber_4;
    QLabel *label_5;
    QFrame *blueFrame3;
    QLCDNumber *lcdNumber_3;
    QLabel *label_6;
    QFrame *blue1Frame;
    QLCDNumber *lcdNumber_5;
    QLabel *label_4;
    QWidget *autoTab;
    QLCDNumber *matchTimer;
    QLabel *matchTimerLabel;
    QLabel *matchNumberLabel;
    QLabel *label_9;
    QComboBox *venueComboBox;
    QLineEdit *matchLabelEdit;
    QMenuBar *menuBar;
    QMenu *menuWiiScouter;
    QMenu *menuEdit;
    QMenu *menuMatch;
    QMenu *menuTools;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *WiiScouterClass)
    {
    if (WiiScouterClass->objectName().isEmpty())
        WiiScouterClass->setObjectName(QString::fromUtf8("WiiScouterClass"));
    WiiScouterClass->resize(609, 483);
    actionCommit_to_Database = new QAction(WiiScouterClass);
    actionCommit_to_Database->setObjectName(QString::fromUtf8("actionCommit_to_Database"));
    actionCopy = new QAction(WiiScouterClass);
    actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
    actionPaste = new QAction(WiiScouterClass);
    actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
    actionCut = new QAction(WiiScouterClass);
    actionCut->setObjectName(QString::fromUtf8("actionCut"));
    actionStart_Match = new QAction(WiiScouterClass);
    actionStart_Match->setObjectName(QString::fromUtf8("actionStart_Match"));
    actionNext_Match = new QAction(WiiScouterClass);
    actionNext_Match->setObjectName(QString::fromUtf8("actionNext_Match"));
    actionPrevious_Match = new QAction(WiiScouterClass);
    actionPrevious_Match->setObjectName(QString::fromUtf8("actionPrevious_Match"));
    actionGo_to_Match = new QAction(WiiScouterClass);
    actionGo_to_Match->setObjectName(QString::fromUtf8("actionGo_to_Match"));
    actionFind_Wiimotes = new QAction(WiiScouterClass);
    actionFind_Wiimotes->setObjectName(QString::fromUtf8("actionFind_Wiimotes"));
    actionSchedule_Editor = new QAction(WiiScouterClass);
    actionSchedule_Editor->setObjectName(QString::fromUtf8("actionSchedule_Editor"));
    actionQuit = new QAction(WiiScouterClass);
    actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
    centralWidget = new QWidget(WiiScouterClass);
    centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
    mainTabs = new QTabWidget(centralWidget);
    mainTabs->setObjectName(QString::fromUtf8("mainTabs"));
    mainTabs->setGeometry(QRect(10, 80, 581, 321));
    setupTab = new QWidget();
    setupTab->setObjectName(QString::fromUtf8("setupTab"));
    gridLayoutWidget = new QWidget(setupTab);
    gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
    gridLayoutWidget->setGeometry(QRect(0, 0, 571, 291));
    gridLayout = new QGridLayout(gridLayoutWidget);
    gridLayout->setSpacing(6);
    gridLayout->setMargin(11);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    gridLayout->setContentsMargins(0, 0, 0, 0);
    red3Frame = new QFrame(gridLayoutWidget);
    red3Frame->setObjectName(QString::fromUtf8("red3Frame"));
    red3Frame->setFrameShape(QFrame::StyledPanel);
    red3Frame->setFrameShadow(QFrame::Raised);
    label_3 = new QLabel(red3Frame);
    label_3->setObjectName(QString::fromUtf8("label_3"));
    label_3->setGeometry(QRect(10, 10, 101, 17));
    lcdNumber_2 = new QLCDNumber(red3Frame);
    lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
    lcdNumber_2->setGeometry(QRect(10, 50, 101, 31));
    lcdNumber_2->setProperty("value", QVariant(1359));

    gridLayout->addWidget(red3Frame, 3, 0, 1, 1);

    red2Frame = new QFrame(gridLayoutWidget);
    red2Frame->setObjectName(QString::fromUtf8("red2Frame"));
    red2Frame->setFrameShape(QFrame::StyledPanel);
    red2Frame->setFrameShadow(QFrame::Raised);
    label_2 = new QLabel(red2Frame);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(10, 10, 91, 17));
    lcdNumber = new QLCDNumber(red2Frame);
    lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
    lcdNumber->setGeometry(QRect(10, 50, 111, 31));
    lcdNumber->setProperty("value", QVariant(997));

    gridLayout->addWidget(red2Frame, 2, 0, 1, 1);

    red1Frame = new QFrame(gridLayoutWidget);
    red1Frame->setObjectName(QString::fromUtf8("red1Frame"));
    red1Frame->setFrameShape(QFrame::StyledPanel);
    red1Frame->setFrameShadow(QFrame::Raised);
    label = new QLabel(red1Frame);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(10, 7, 91, 20));
    red1Number = new QLCDNumber(red1Frame);
    red1Number->setObjectName(QString::fromUtf8("red1Number"));
    red1Number->setGeometry(QRect(10, 50, 111, 31));
    red1Number->setProperty("value", QVariant(955));

    gridLayout->addWidget(red1Frame, 0, 0, 1, 1);

    blue2Frame = new QFrame(gridLayoutWidget);
    blue2Frame->setObjectName(QString::fromUtf8("blue2Frame"));
    blue2Frame->setFrameShape(QFrame::StyledPanel);
    blue2Frame->setFrameShadow(QFrame::Raised);
    lcdNumber_4 = new QLCDNumber(blue2Frame);
    lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));
    lcdNumber_4->setGeometry(QRect(10, 50, 101, 31));
    lcdNumber_4->setProperty("value", QVariant(968));
    label_5 = new QLabel(blue2Frame);
    label_5->setObjectName(QString::fromUtf8("label_5"));
    label_5->setGeometry(QRect(10, 10, 91, 17));

    gridLayout->addWidget(blue2Frame, 2, 1, 1, 1);

    blueFrame3 = new QFrame(gridLayoutWidget);
    blueFrame3->setObjectName(QString::fromUtf8("blueFrame3"));
    blueFrame3->setFrameShape(QFrame::StyledPanel);
    blueFrame3->setFrameShadow(QFrame::Raised);
    lcdNumber_3 = new QLCDNumber(blueFrame3);
    lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));
    lcdNumber_3->setGeometry(QRect(10, 50, 101, 31));
    lcdNumber_3->setProperty("value", QVariant(254));
    label_6 = new QLabel(blueFrame3);
    label_6->setObjectName(QString::fromUtf8("label_6"));
    label_6->setGeometry(QRect(10, 10, 101, 17));

    gridLayout->addWidget(blueFrame3, 3, 1, 1, 1);

    blue1Frame = new QFrame(gridLayoutWidget);
    blue1Frame->setObjectName(QString::fromUtf8("blue1Frame"));
    blue1Frame->setFrameShape(QFrame::StyledPanel);
    blue1Frame->setFrameShadow(QFrame::Raised);
    lcdNumber_5 = new QLCDNumber(blue1Frame);
    lcdNumber_5->setObjectName(QString::fromUtf8("lcdNumber_5"));
    lcdNumber_5->setGeometry(QRect(10, 50, 101, 31));
    lcdNumber_5->setProperty("value", QVariant(22));
    label_4 = new QLabel(blue1Frame);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setGeometry(QRect(10, 10, 91, 17));

    gridLayout->addWidget(blue1Frame, 0, 1, 1, 1);

    mainTabs->addTab(setupTab, QString());
    autoTab = new QWidget();
    autoTab->setObjectName(QString::fromUtf8("autoTab"));
    mainTabs->addTab(autoTab, QString());
    matchTimer = new QLCDNumber(centralWidget);
    matchTimer->setObjectName(QString::fromUtf8("matchTimer"));
    matchTimer->setGeometry(QRect(470, 10, 101, 31));
    matchTimerLabel = new QLabel(centralWidget);
    matchTimerLabel->setObjectName(QString::fromUtf8("matchTimerLabel"));
    matchTimerLabel->setGeometry(QRect(370, 10, 81, 20));
    matchNumberLabel = new QLabel(centralWidget);
    matchNumberLabel->setObjectName(QString::fromUtf8("matchNumberLabel"));
    matchNumberLabel->setGeometry(QRect(20, 10, 91, 17));
    label_9 = new QLabel(centralWidget);
    label_9->setObjectName(QString::fromUtf8("label_9"));
    label_9->setGeometry(QRect(20, 40, 60, 17));
    venueComboBox = new QComboBox(centralWidget);
    venueComboBox->setObjectName(QString::fromUtf8("venueComboBox"));
    venueComboBox->setGeometry(QRect(120, 40, 211, 27));
    matchLabelEdit = new QLineEdit(centralWidget);
    matchLabelEdit->setObjectName(QString::fromUtf8("matchLabelEdit"));
    matchLabelEdit->setEnabled(true);
    matchLabelEdit->setGeometry(QRect(120, 10, 113, 27));
    matchLabelEdit->setEchoMode(QLineEdit::Normal);
    matchLabelEdit->setReadOnly(true);
    WiiScouterClass->setCentralWidget(centralWidget);
    menuBar = new QMenuBar(WiiScouterClass);
    menuBar->setObjectName(QString::fromUtf8("menuBar"));
    menuBar->setGeometry(QRect(0, 0, 609, 25));
    menuWiiScouter = new QMenu(menuBar);
    menuWiiScouter->setObjectName(QString::fromUtf8("menuWiiScouter"));
    menuEdit = new QMenu(menuBar);
    menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
    menuMatch = new QMenu(menuBar);
    menuMatch->setObjectName(QString::fromUtf8("menuMatch"));
    menuTools = new QMenu(menuBar);
    menuTools->setObjectName(QString::fromUtf8("menuTools"));
    WiiScouterClass->setMenuBar(menuBar);
    statusBar = new QStatusBar(WiiScouterClass);
    statusBar->setObjectName(QString::fromUtf8("statusBar"));
    WiiScouterClass->setStatusBar(statusBar);
    mainToolBar = new QToolBar(WiiScouterClass);
    mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
    mainToolBar->setBaseSize(QSize(0, 0));
    WiiScouterClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

    menuBar->addAction(menuWiiScouter->menuAction());
    menuBar->addAction(menuEdit->menuAction());
    menuBar->addAction(menuMatch->menuAction());
    menuBar->addAction(menuTools->menuAction());
    menuWiiScouter->addAction(actionCommit_to_Database);
    menuWiiScouter->addAction(actionQuit);
    menuEdit->addAction(actionCopy);
    menuEdit->addAction(actionPaste);
    menuEdit->addAction(actionCut);
    menuMatch->addAction(actionStart_Match);
    menuMatch->addAction(actionNext_Match);
    menuMatch->addAction(actionPrevious_Match);
    menuMatch->addAction(actionGo_to_Match);
    menuTools->addAction(actionFind_Wiimotes);
    menuTools->addAction(actionSchedule_Editor);
    mainToolBar->addAction(actionStart_Match);
    mainToolBar->addAction(actionNext_Match);
    mainToolBar->addAction(actionPrevious_Match);

    retranslateUi(WiiScouterClass);

    mainTabs->setCurrentIndex(0);


    QMetaObject::connectSlotsByName(WiiScouterClass);
    } // setupUi

    void retranslateUi(QMainWindow *WiiScouterClass)
    {
    WiiScouterClass->setWindowTitle(QApplication::translate("WiiScouterClass", "WiiScouter", 0, QApplication::UnicodeUTF8));
    actionCommit_to_Database->setText(QApplication::translate("WiiScouterClass", "Commit to Database", 0, QApplication::UnicodeUTF8));
    actionCopy->setText(QApplication::translate("WiiScouterClass", "Copy", 0, QApplication::UnicodeUTF8));
    actionPaste->setText(QApplication::translate("WiiScouterClass", "Paste", 0, QApplication::UnicodeUTF8));
    actionCut->setText(QApplication::translate("WiiScouterClass", "Cut", 0, QApplication::UnicodeUTF8));
    actionStart_Match->setText(QApplication::translate("WiiScouterClass", "Start Match", 0, QApplication::UnicodeUTF8));
    actionNext_Match->setText(QApplication::translate("WiiScouterClass", "Next Match", 0, QApplication::UnicodeUTF8));
    actionPrevious_Match->setText(QApplication::translate("WiiScouterClass", "Previous Match", 0, QApplication::UnicodeUTF8));
    actionGo_to_Match->setText(QApplication::translate("WiiScouterClass", "Go to Match...", 0, QApplication::UnicodeUTF8));
    actionFind_Wiimotes->setText(QApplication::translate("WiiScouterClass", "Find Wiimotes", 0, QApplication::UnicodeUTF8));
    actionSchedule_Editor->setText(QApplication::translate("WiiScouterClass", "Schedule Editor", 0, QApplication::UnicodeUTF8));
    actionQuit->setText(QApplication::translate("WiiScouterClass", "Quit", 0, QApplication::UnicodeUTF8));
    actionQuit->setShortcut(QApplication::translate("WiiScouterClass", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
    label_3->setText(QApplication::translate("WiiScouterClass", "Red Alliance 3", 0, QApplication::UnicodeUTF8));
    label_2->setText(QApplication::translate("WiiScouterClass", "Red Alliance 2", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("WiiScouterClass", "Red Alliance 1", 0, QApplication::UnicodeUTF8));
    label_5->setText(QApplication::translate("WiiScouterClass", "Blue Alliance 2", 0, QApplication::UnicodeUTF8));
    label_6->setText(QApplication::translate("WiiScouterClass", "Blue Alliance 3", 0, QApplication::UnicodeUTF8));
    label_4->setText(QApplication::translate("WiiScouterClass", "Blue Alliance 1", 0, QApplication::UnicodeUTF8));
    mainTabs->setTabText(mainTabs->indexOf(setupTab), QApplication::translate("WiiScouterClass", "Match Setup", 0, QApplication::UnicodeUTF8));
    mainTabs->setTabText(mainTabs->indexOf(autoTab), QApplication::translate("WiiScouterClass", "Autonomous Mode", 0, QApplication::UnicodeUTF8));
    matchTimerLabel->setText(QApplication::translate("WiiScouterClass", "Match Timer", 0, QApplication::UnicodeUTF8));
    matchNumberLabel->setText(QApplication::translate("WiiScouterClass", "Match Number", 0, QApplication::UnicodeUTF8));
    label_9->setText(QApplication::translate("WiiScouterClass", "Venue", 0, QApplication::UnicodeUTF8));
    venueComboBox->clear();
    venueComboBox->insertItems(0, QStringList()
     << QApplication::translate("WiiScouterClass", "Pacific Northwest Regional", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("WiiScouterClass", "Microsoft Seattle Regional", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("WiiScouterClass", "Sacramento Davis Regional", 0, QApplication::UnicodeUTF8)
     << QApplication::translate("WiiScouterClass", "Championships", 0, QApplication::UnicodeUTF8)
    );
    menuWiiScouter->setTitle(QApplication::translate("WiiScouterClass", "File", 0, QApplication::UnicodeUTF8));
    menuEdit->setTitle(QApplication::translate("WiiScouterClass", "Edit", 0, QApplication::UnicodeUTF8));
    menuMatch->setTitle(QApplication::translate("WiiScouterClass", "Match", 0, QApplication::UnicodeUTF8));
    menuTools->setTitle(QApplication::translate("WiiScouterClass", "Tools", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WiiScouterClass: public Ui_WiiScouterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIISCOUTER_H
