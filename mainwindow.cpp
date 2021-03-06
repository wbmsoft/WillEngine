#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox"
#include "QDebug"
#include "createprojectwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionCreate_Project_triggered()
{
    CreateProjectWindow window;
    window.setModal(true);
    window.exec();
}

void MainWindow::on_actionExit_2_triggered()
{
    QMessageBox::StandardButton respond = QMessageBox::question(this, "Закрытие приложения", "Вы действительно хотите выйти?", QMessageBox::Yes | QMessageBox::No);
    if (respond == QMessageBox::Yes) QApplication::quit();
}
