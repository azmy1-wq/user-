#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPixmap>
#include"dialog.h"
#include"user.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/admin/Downloads/soura");
    int w = ui->label_7->width();
    int h = ui->label_7->height();
    ui->label_7->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_login_clicked()
{

   }



void MainWindow::on_pushButton_2_clicked()
{

}

void MainWindow::on_pushButton_clicked()
{
    user usr ;
   usr.setnometprenom(ui->lineEdit->text());
   usr.setmotdepasse(ui->lineEdit_password->text());
     usr.setEmail(ui->lineEdit_2->text());

}

void MainWindow::on_pushButton_3_clicked()
{
    Dialog dialog ;
    dialog.setModal(true);
    dialog.exec();
}
