#ifndef LABELOBSERVER_H
#define LABELOBSERVER_H
#include"fileloader.h"
#include "observer.h"
#include "mainwindow.h"



class LABELObserver:public Observer
{
public:
    LABELObserver(Subject* s,MainWindow* w);

    void update()override{
        W->ui->label->setText((dynamic_cast <FileLoader*> (S))->getName());
    }

private:
    MainWindow* W;
    Subject* S;

};

#endif // LABELOBSERVER_H
