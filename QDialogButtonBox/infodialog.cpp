#include "infodialog.h"
#include "ui_infodialog.h"
#include<QDebug>

InfoDialog::InfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoDialog)
{
    ui->setupUi(this);
}

InfoDialog::~InfoDialog()
{
    delete ui;
}

void InfoDialog::on_buttonBox_clicked(QAbstractButton *button)
{
    QDialogButtonBox::StandardButton stdButton=ui->buttonBox->standardButton(button);

        if(stdButton==QDialogButtonBox::Ok)

        {

        accept();

        qDebug()<<"Ok button is clicked";

        }
        if(stdButton==QDialogButtonBox::Cancel)

        {

        reject();

        qDebug()<<"Cancel button is clicked";

        }
        if(stdButton==QDialogButtonBox::Save)

        {

        accepted();

        qDebug()<<"Save button is clicked";

        }
        if(stdButton==QDialogButtonBox::SaveAll)

        {

        accept();

        qDebug()<<"SaveAll button is clicked";

        }
        if(stdButton==QDialogButtonBox::No)

        {

        reject();

        qDebug()<<"No button is clicked";

        }
        if(stdButton==QDialogButtonBox::NoToAll)

        {

        rejected();

        qDebug()<<"NoToAll button is clicked";

        }
        if(stdButton==QDialogButtonBox::Open)

        {

        open();

        qDebug()<<"Open button is clicked";
        }
}
