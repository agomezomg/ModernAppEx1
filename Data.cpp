#include "Data.h"

void Data::registerObserver(Observer *observer) {
    observers.push_back(observer);
}

void Data::notifyObservers() {
    for (Observer *observer : observers) {
        observer -> update(timeA, timeB, timeC);
    }
}

void Data::setState(float timeA, float timeB, float timeC) {
    this -> timeA = timeA;
    this -> timeB = timeB;
    this -> timeC = timeC;
    std::cout << std::endl;
    std::cout << "Notifying observers..." << std::endl;
    notifyObservers();
}

float Data::getAverage() {
	return ((this -> timeA * this -> timeB * this -> timeC) / 3.0);
}