#include "pbobserver.h"

PBObserver::PBObserver(Subject* s,MainWindow *w)
{
    S=s;
    W=w;
    S->subscribe(this);
}
