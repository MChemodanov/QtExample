#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(int period, QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    int counter;
    QTimer timer;

public slots:
    void onClicked();
};

#endif // MAINWINDOW_H
