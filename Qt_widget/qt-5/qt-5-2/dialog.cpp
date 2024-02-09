#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btnLoad_clicked()
{
    QFile file(":/documents/files/files/file.txt");
    if(!file.exists())
    {
        QMessageBox::critical(this,"sorry,File not found", "we could not found that file");
        return;
    }
    if(!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::critical(this,"sorry,error", file.errorString());
        return;
    }
    QTextStream Stream(&file);
    ui->plainTextEdit->setPlainText(Stream.readAll());
    file.close();
}


void Dialog::on_btnSave_clicked()
{
    QFile file(":/documents/files/files/file.txt");
    if(!file.exists())
    {
        QMessageBox::critical(this,"sorry,File not found", "we could not found that file");
        return;
    }
    if(!file.open(QIODevice::WriteOnly))
    {
        QMessageBox::critical(this,"sorry,error", "u cant write into file");
        return;
    }
    else
    {
        QMessageBox::information(this,"sorry,error", "you can write into file");


    }
    if(!file.open(QIODevice::WriteOnly))
    {
        QMessageBox::critical(this,"sorry,error", file.errorString());
        return;
    }
    QTextStream Stream(&file);
    Stream<<ui->plainTextEdit->toPlainText();
    file.close();
}

