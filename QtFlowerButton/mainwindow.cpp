#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "qflowerbutton.h"
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QHBoxLayout* hlayout = new QHBoxLayout();
    QFlowerButton* flower = new QFlowerButton();
    hlayout->addWidget(flower);
    ui->centralwidget->setLayout(hlayout);
}

MainWindow::~MainWindow()
{
    delete ui;
}

