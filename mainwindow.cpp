#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox msgBox;
    msgBox.setText("Hello "+ui->lineEdit->text()+"!");
    msgBox.exec();
}

void MainWindow::on_lineEdit_returnPressed()
{
    MainWindow::on_pushButton_clicked();
}
