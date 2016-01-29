#ifndef CONNECTUAVDIALOG_H
#define CONNECTUAVDIALOG_H

#include <QWidget>

namespace Ui {
class connectuavdialog;
}

class connectuavdialog : public QWidget
{
    Q_OBJECT

public:
    explicit connectuavdialog(QWidget *parent = 0);
    ~connectuavdialog();

private:
    Ui::connectuavdialog *ui;
};

#endif // CONNECTUAVDIALOG_H
