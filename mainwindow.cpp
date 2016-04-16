#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    centralWidget()->layout()->setSpacing(0);
    centralWidget()->layout()->setContentsMargins(0, 0, 0, 0);
    centralWidget()->layout()->setSizeConstraint(QLayout::SetMaximumSize);
}

MainWindow::~MainWindow()
{
    delete ui;
}
