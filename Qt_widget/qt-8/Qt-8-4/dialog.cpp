#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    init();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_buttonBox_accepected()
{
    accept();

}

void Dialog::hrClicked()
{
    QMessageBox::information(this,"HR","you sent the info to HR");

}

void Dialog::legalClicked()
{
QMessageBox::information(this,"Legal","you sent the info to Legal");
}

void Dialog::nextClicked()
{
    int tab=ui->tabWidget->currentIndex();
    int max=ui->tabWidget->count()-1;
    tab++;
    if(tab>max) tab=max;
    ui->tabWidget->setCurrentIndex(tab);
}

void Dialog::backClicked()
{
   int tab=ui->tabWidget->currentIndex();
    int min=0;
    tab--;
    if(tab < min) tab=min;
    ui->tabWidget->setCurrentIndex(tab);
}

void Dialog::init()
{
    QPushButton *btnBack= new QPushButton("Back",this);
    QPushButton *btnNext= new QPushButton("Next",this);
    connect(btnBack,&QPushButton::clicked,this,&Dialog::backClicked);
    connect(btnNext,&QPushButton::clicked,this,&Dialog::nextClicked);

    ui->buttonBox->addButton(btnBack,QDialogButtonBox::ButtonRole::ActionRole);
    ui->buttonBox->addButton(btnNext,QDialogButtonBox::ButtonRole::ActionRole);

//update tabs
    ui->tabWidget->setTabText(0,"Profile");
    ui->tabWidget->setTabText(1,"Notes");
     //add tabs
    QWidget *widget=new QWidget(this);
    ui->tabWidget->addTab(widget,"Send");
    QPushButton *btnMr= new QPushButton("send to hunam resource",this);
    QPushButton *btnLegal= new QPushButton("send to legal",this);
    connect(btnMr,&QPushButton::clicked,this,&Dialog::hrClicked);
    connect(btnLegal,&QPushButton::clicked,this,&Dialog::legalClicked);
    QVBoxLayout *layout=new QVBoxLayout(widget);
    layout->addWidget(btnMr);
    layout->addWidget(btnLegal);
    widget->setLayout(layout);


}





