#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_toolButton_6_clicked(bool checked);

    void on_toolButton_4_clicked(bool checked);

    void on_toolButton_5_clicked(bool checked);

    void on_toolButton_2_clicked(bool checked);

    void on_toolButton_3_clicked(bool checked);

    void on_toolButton_7_clicked(bool checked);

    void on_actionTest_login_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
