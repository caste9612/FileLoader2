#include "labelobserver.h"

LABELObserver::LABELObserver(Subject* s,MainWindow *w)
{
    S=s;
    W=w;
    S->subscribe(this);
}
