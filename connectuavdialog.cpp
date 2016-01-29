#include "connectuavdialog.h"
#include "ui_connectuavdialog.h"

connectuavdialog::connectuavdialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::connectuavdialog)
{
    ui->setupUi(this);
}

connectuavdialog::~connectuavdialog()
{
    delete ui;
}
