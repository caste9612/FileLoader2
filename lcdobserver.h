#ifndef LCDOBSERVER_H
#define LCDOBSERVER_H

#include "observer.h"
#include "mainwindow.h"
#include "fileloader.h"



class LCDObserver:public Observer
{
public:
    LCDObserver(Subject* s,MainWindow* w);

    void update()override{
        W->ui->lcdNumber->display((int)(((dynamic_cast <FileLoader*> (S))->getLoaded())/1000000));
        W->ui->lcdNumber_2->display((int)(((dynamic_cast <FileLoader*> (S))->getLoaded())/1000000));
    }

private:
    MainWindow* W;
    Subject* S;


};

#endif // LCDOBSERVER_H
