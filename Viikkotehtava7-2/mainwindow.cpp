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

void MainWindow::on_add_clicked()
{
    if (tila == 3) {

    QString num1Str = ui->num1->text();
    int num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2 = num2Str.toInt();

    int result = num1+num2;
    qDebug() << "Plus:" << num1 << "+" << num2 << "=" << result;

    QString resStr = QString::number(result);
    ui->result->setText(resStr);

    tila = 1;
    qDebug() << "laskun jalkeen tila" << tila;
    }

}


void MainWindow::on_sub_clicked()
{
     if (tila == 3) {

    QString num1Str = ui->num1->text();
    int num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2 = num2Str.toInt();

    int result = num1-num2;
    qDebug() << "Minus:" << num1 << "-" << num2 << "=" << result;

    QString resStr = QString::number(result);
    ui->result->setText(resStr);

    tila = 1;
    qDebug() << "laskun jalkeen tila" << tila;
}
}


void MainWindow::on_mul_clicked()
{
     if (tila == 3) {

    QString num1Str = ui->num1->text();
    int num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2 = num2Str.toInt();

    int result = num1*num2;
    qDebug() << "Multiply:" << num1 << "*" << num2 << "=" << result;

    QString resStr = QString::number(result);
    ui->result->setText(resStr);

    tila = 1;
    qDebug() << "laskun jalkeen tila" << tila;
}
}


void MainWindow::on_div_clicked()
{
     if (tila == 3) {

    QString num1Str = ui->num1->text();
    int num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2 = num2Str.toInt();

    int result = num1/num2;
    qDebug() << "Divided:" << num1 << "/" << num2 << "=" << result;

    QString resStr = QString::number(result);
    ui->result->setText(resStr);

    tila = 1;
    qDebug() << "laskun jalkeen tila" << tila;
}
}


void MainWindow::on_N1_clicked()
{
    QString str = ui->N1->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N2_clicked()
{
    QString str = ui->N2->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N3_clicked()
{
    QString str = ui->N3->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N4_clicked()
{
    QString str = ui->N4->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N5_clicked()
{
    QString str = ui->N5->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N6_clicked()
{
    QString str = ui->N6->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N7_clicked()
{
    QString str = ui->N7->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N8_clicked()
{
    QString str = ui->N8->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N9_clicked()
{
    QString str = ui->N9->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N0_clicked()
{
    QString str = ui->N0->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::numberClickHandler(int n)
{
    qDebug() << "Valittu numero=" << n;
    QString str = QString::number(n);
    if (tila ==1 ) {
        qDebug() << "Elementti num1" << n;
        ui->num1->setText(str);
    } else if(tila ==2 ) {
        qDebug() << "Elementti num2" << n;
        ui->num2->setText(str);
    }
}



void MainWindow::on_enter_clicked()
{
    tila++;
    qDebug() << "Valittu num1" << tila;
}


void MainWindow::on_clear_clicked()
{
    ui->num1->setText(" ");
    ui->num2->setText(" ");
    ui->result->setText(" ");
    tila = 1;
    qDebug() << "laskin nollattu" << tila;
}

