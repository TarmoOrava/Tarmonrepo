#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_Add_clicked()
{
    // Lue numero elementistä
    QString str = ui->lineEdit->text();
    int num = str.toInt();
    qDebug() << "Numero=" << num;
    // Kasvata numeroa yhdellä
    num++;
    // Asera numero takaisin elementtiin
    QString uusStr = QString::number(num);
    qDebug() << "kasvatettu numero" << num;
    ui->lineEdit->setText(uusStr);
}


void MainWindow::on_Reset_clicked()
{
   // Aseta nolla elementtiin
    ui->lineEdit->setText("0");
}

