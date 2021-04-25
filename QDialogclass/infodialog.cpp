#include "infodialog.h"
#include "ui_infodialog.h"

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

void InfoDialog::on_OKpushButton_clicked()
{
   QString userposition=ui->positionlineEdit->text();
   if(!userposition.isEmpty())
   {
       position=userposition;
       if(ui->windowradioButton->isChecked())
       {
           favouriteos="Windows";
       }
       if(ui->macradioButton->isChecked())
       {
           favouriteos="max";
       }
       if(ui->linuxradioButton->isChecked())
       {
           favouriteos="linux";
       }
   }
   accept();
}

void InfoDialog::on_CANCELpushbutton_clicked()
{
    reject();
}

QString InfoDialog::getFavouriteos() const
{
    return favouriteos;
}

QString InfoDialog::getPosition() const
{
    return position;
}
