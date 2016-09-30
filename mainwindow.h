#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "fileloader.h"
#include "ui_mainwindow.h"

class FileLoader;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0,FileLoader* q = nullptr);
    ~MainWindow();
    Ui::MainWindow *ui;


private slots:
    void on_pushButton_clicked();

private:
    FileLoader* fl;

};

#endif // MAINWINDOW_H
