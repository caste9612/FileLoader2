#ifndef SUBJECT_H
#define SUBJECT_H

#include <list>
#include "observer.h"

using namespace std;

class Subject
{
public:

    virtual ~Subject()=0;
    void subscribe(Observer* q);
    void remove(Observer* q);
    list <Observer*> observers;
};


#endif // SUBJECT_H
