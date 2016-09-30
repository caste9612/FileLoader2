#include "subject.h"



void Subject::subscribe(Observer * q){
    observers.push_back(q);
}

void Subject::remove(Observer * q){
    observers.remove(q);
}



Subject::~Subject(){}
