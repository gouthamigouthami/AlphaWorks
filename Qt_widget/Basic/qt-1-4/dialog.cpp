#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->btnConnect,&QPushButton::clicked,this,&Dialog::doStuff);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::doStuff()
{
    qInfo()<<"clicked:"<<QDateTime::currentDateTime().toString();
    accept();//will close
}

void Dialog::on_btnEditor_clicked()
{
    qInfo()<<"Went well";
    doStuff();
}

