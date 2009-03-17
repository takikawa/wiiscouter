#ifndef SCHEDULEDIALOG_H
#define SCHEDULEDIALOG_H

#include <QDialog>
#include <QHBoxLayout>
#include <QPushButton>
#include <QTableWidget>
#include <QVBoxLayout>

class ScheduleDialog : public QDialog
{
public:
    ScheduleDialog();

private:
    //QTableView *table;
    QTableWidget *table;
};

#endif // SCHEDULEDIALOG_H
