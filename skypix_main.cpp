#include "skypix_main.h"
#include "ui_skypix_main.h"

SkyPix_Main::SkyPix_Main(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SkyPix_Main)
{
    ui->setupUi(this);
}

SkyPix_Main::~SkyPix_Main()
{
    delete ui;
}
