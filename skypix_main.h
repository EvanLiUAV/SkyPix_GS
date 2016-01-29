#ifndef SKYPIX_MAIN_H
#define SKYPIX_MAIN_H

#include <QMainWindow>

namespace Ui {
class SkyPix_Main;
}

class SkyPix_Main : public QMainWindow
{
    Q_OBJECT

public:
    explicit SkyPix_Main(QWidget *parent = 0);
    ~SkyPix_Main();

private:
    Ui::SkyPix_Main *ui;
};

#endif // SKYPIX_MAIN_H
