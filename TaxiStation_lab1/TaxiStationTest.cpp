// AirlineTicketTest.cpp

#include <iostream>
#include "Car.h"

using namespace std;

int main(int argc, char** argv)
{
 Car CarStack;
    Car* CarHeap;
    CarHeap = new Car();

    CarStack.setCarCode(1);
    CarStack.setCreatedYear("2000");
    CarStack.setEngineNumber("432XE4");
    CarStack.setMileage(3435);
    CarStack.setRegistrationNumber("MM434AX");

    CarHeap->setCarCode(2);
    CarHeap->setCreatedYear("2000");
    CarHeap->setEngineNumber("432XE4");
    CarHeap->setDriverCode(1);
    CarHeap->setRegistrationNumber("MM434AX");

    std::cout << CarStack.getCarCode() << " "
            << CarStack.getCreatedYear() << " "
            << CarStack.getEngineNumber() << " "
            << CarStack.getMileage() << " "
            << CarStack.getRegistrationNumber() << " "
            << CarStack.getDriverCode() << " "
            << CarStack.calculateCarPriceInDollars()
            << std::endl;


    std::cout << CarHeap->getCarCode() << " "
            << CarHeap->getCreatedYear() << " "
            << CarHeap->getEngineNumber() << " "
            << CarHeap->getMileage() << " "
            << CarHeap->getRegistrationNumber() << " "
            << CarHeap->getDriverCode() << " "
            << CarHeap->calculateCarPriceInDollars() 
            << std::endl;

    delete CarHeap;

  return 0;
} 
