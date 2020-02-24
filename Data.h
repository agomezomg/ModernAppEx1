#pragma once
#include <vector>
#include <algorithm>
#include <iostream>

#include "Subject.h"
#include "Observer.h"

using std::vector;

class Data : public Subject {
    vector<Observer*> observers; // observers
    float timeA = 0;
    float timeB = 0;
    float timeC = 0;

public:
    void registerObserver(Observer *observer);
    void notifyObservers();
    void setState(float timeA, float timeB, float timeC);
	float getAverage();
};