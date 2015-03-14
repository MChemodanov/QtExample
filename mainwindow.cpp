#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "math.h"

MainWindow::MainWindow(int period, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    counter = 0;
    ui->textEdit->setText(QString::number(counter));

    connect(ui->pushButton,SIGNAL(clicked()),this, SLOT(onClicked()));
    connect(&timer,SIGNAL(timeout()), this, SLOT(onClicked()));
    timer.setInterval(period);
    timer.start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onClicked()
{
    counter += 1;
    ui->textEdit->setText(QString::number(counter));
    ui->pushButton->move(counter,sin(counter*0.1f)*100 + 300);
}
