#include "onlywindow.h"
#include "ui_onlywindow.h"
#include <cpuinfo.h>

OnlyWindow::OnlyWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OnlyWindow)
{
    ui->setupUi(this);
    ui->cpuInfo->setText(QString("Please click on button to get your CPU's info!"));
}

OnlyWindow::~OnlyWindow()
{
    delete ui;
}

void OnlyWindow::on_getInfo_clicked()
{
    ui->cpuInfo->setText(CPUInfo::getCPUInfo());
}
