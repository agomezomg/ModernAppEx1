#pragma once

class Observer {

public:
	virtual void update(float timeA, float timeB, float timeC) = 0;
};