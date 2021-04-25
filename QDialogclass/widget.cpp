#include "widget.h"
#include "ui_widget.h"
#include<infodialog.h>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}



void Widget::on_provideInfopushButton_clicked()
{
    InfoDialog *dialog=new InfoDialog(this);
    /*    int ret=dialog->exec();
    if(ret==QDialog::Accepted)
    {
        QString position=dialog->getPosition();
        QString os=dialog->getFavouriteos();
        qDebug()<<"Dialog Accepted,position is:"<<position<<"and favourite os is:"<<os;
        ui->infolabel->setText("Your position is "+position+" and your favourite os :"+os);
    }
    if(ret==QDialog::Rejected)
    {
        qDebug()<<"Dialog Rejected";
    }
    */
    connect(dialog,&InfoDialog::accepted,[=](){
        QString position=dialog->getPosition();
        QString os=dialog->getFavouriteos();
        qDebug()<<"Dialog Accepted,position is:"<<position<<"and favourite os is:"<<os;
        ui->infolabel->setText("Your position is "+position+" and your favourite os :"+os);
    });
    connect(dialog,&InfoDialog::rejected,[=](){
        qDebug()<<"Dialog rejected";
    });
    dialog->show();
    dialog->raise();
    dialog->activateWindow();
}
