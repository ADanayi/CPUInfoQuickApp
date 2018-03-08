#ifndef ONLYWINDOW_H
#define ONLYWINDOW_H

#include <QMainWindow>

namespace Ui {
class OnlyWindow;
}

class OnlyWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit OnlyWindow(QWidget *parent = 0);
    ~OnlyWindow();

private slots:
    void on_getInfo_clicked();

private:
    Ui::OnlyWindow *ui;
};

#endif // ONLYWINDOW_H
