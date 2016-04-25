#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QTextCursor>

LoginWindow::LoginWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::on_pushButton_6_clicked()
{
    this->close();
}

void LoginWindow::on_pushButton_5_clicked()
{
    if ((ui->plainTextEdit->textCursor().selectedText() == "admin") && (ui->plainTextEdit->textCursor().selectedText() =="admin"))
    {
        this->close();
    }
    else
    {
        //check database
    }
}
