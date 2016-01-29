#ifndef UAV_STATE_H
#define UAV_STATE_H

#include <QWidget>

namespace Ui {
class uav_state;
}

class uav_state : public QWidget
{
    Q_OBJECT

public:
    explicit uav_state(QWidget *parent = 0);
    ~uav_state();

private:
    Ui::uav_state *ui;
};

#endif // UAV_STATE_H
