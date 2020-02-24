#include "Client.h"

void Client::update(float timeA, float timeB, float timeC) {
	std::cout << "---------- Client #" << id << "---------" << std::endl;
    std::cout << "Lap 1, time: " << timeA << " s." << std::endl;
	std::cout << "Lap 2, time: " << timeB << " s." << std::endl;
	std::cout << "Lap 3, time: " << timeC << " s." << std::endl;
	std::cout << "Average time: " << ((timeA*timeB*timeC)/3.0);
}

Client::Client(int id) {
    this -> id = id;
}