#include "scheduledialog.h"

ScheduleDialog::ScheduleDialog()
{
    table =  new QTableWidget(12, 3, this);
    QHBoxLayout *tableLayout = new QHBoxLayout;
    tableLayout->addWidget(table);

    QPushButton *okayButton = new QPushButton("OK");
    connect(okayButton, SIGNAL(clicked()), this, SLOT(close()));
    QHBoxLayout *buttonLayout = new QHBoxLayout;
    buttonLayout->addStretch(1);
    buttonLayout->addWidget(okayButton);

    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(tableLayout);
    mainLayout->addStretch(1);
    mainLayout->addSpacing(12);
    mainLayout->addLayout(buttonLayout);

    setLayout(mainLayout);
}
