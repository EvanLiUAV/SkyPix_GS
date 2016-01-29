#include "uav_state.h"
#include "ui_uav_state.h"

uav_state::uav_state(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::uav_state)
{
    ui->setupUi(this);
}

uav_state::~uav_state()
{
    delete ui;
}
