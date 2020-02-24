#pragma once
#include "Observer.h"
#include <iostream>

class Client : public Observer {

    int id;

public:
    Client(int id);
    virtual void update(float timeA, float timeB, float timeC);
};