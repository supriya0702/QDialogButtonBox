#ifndef INFODIALOG_H
#define INFODIALOG_H

#include <QDialog>

namespace Ui {
class InfoDialog;
}

class InfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InfoDialog(QWidget *parent = nullptr);
    ~InfoDialog();

    QString getPosition() const;

    QString getFavouriteos() const;

private slots:
    void on_OKpushButton_clicked();

    void on_CANCELpushbutton_clicked();

private:
    Ui::InfoDialog *ui;
    QString position;
    QString favouriteos;
};

#endif // INFODIALOG_H
