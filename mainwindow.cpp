#include "mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent,FileLoader* q) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    fl=q;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
fl->load();
}

