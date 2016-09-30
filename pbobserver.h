#ifndef PBOBSERVER_H
#define PBOBSERVER_H
#include"fileloader.h"
#include "observer.h"
#include "mainwindow.h"


class PBObserver:public Observer
{
public:
    PBObserver(Subject* s,MainWindow* w);

    void update()override{
        W->ui->progressBar->setValue((((dynamic_cast <FileLoader*> (S))->getLoaded())*100)/((dynamic_cast <FileLoader*> (S))->getTotal()));

    }

private:
    MainWindow* W;
    Subject* S;
};

#endif // PBOBSERVER_H
