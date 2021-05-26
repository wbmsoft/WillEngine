#include "createprojectwindow.h"
#include "ui_createprojectwindow.h"

CreateProjectWindow::CreateProjectWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateProjectWindow)
{
    ui->setupUi(this);
}

CreateProjectWindow::~CreateProjectWindow()
{
    delete ui;
}
