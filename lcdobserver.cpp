#include "lcdobserver.h"



LCDObserver::LCDObserver(Subject* s,MainWindow* w)
{
S=s;
W=w;
S->subscribe(this);
}
