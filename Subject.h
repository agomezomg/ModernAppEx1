#pragma once
#include "Observer.h"

class Subject {
public:
    virtual void registerObserver(Observer* observer) = 0;
    virtual void notifyObservers() = 0;
};