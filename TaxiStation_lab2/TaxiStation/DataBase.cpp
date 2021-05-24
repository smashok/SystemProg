#include <iostream>
#include <stdexcept>
#include "DataBase.h"
#include <fstream>
using namespace std;
DataBase::DataBase() {
    Car car;
    car.setBrandCode(1);
    car.setCreatedYear("1998");
    car.setDriverCode(1);
    car.setMileage(1000);
    car.setLastTODate("2002");
    car.setRegistrationNumber("abCx43");
    car.setBodyNumber("fdgdfgs");
    car.setEngineNumber("ytydse");
    car.setCarCode(this->nextCarCode++);
    Cars.push_back(car);

        Car car2;
    car2.setBrandCode(2);
    car2.setCreatedYear("1963");
    car2.setDriverCode(2);
    car2.setMileage(3000);
    car2.setLastTODate("2007");
    car2.setRegistrationNumber("a42fd");
    car2.setBodyNumber("543fds");
    car2.setEngineNumber("6722dsf");
    car2.setCarCode(this->nextCarCode++);
    Cars.push_back(car2);

        Car car3;
    car3.setBrandCode(3);
    car3.setCreatedYear("1965");
    car3.setDriverCode(3);
    car3.setMileage(5555);
    car3.setLastTODate("1999");
    car3.setRegistrationNumber("jhgk42");
    car3.setBodyNumber("hf42");
    car3.setEngineNumber("gfdg234");
    car3.setCarCode(this->nextCarCode++);
    Cars.push_back(car3);
};
DataBase::~DataBase() {};

Car& DataBase::addCar(const int& brandCode, const int& driverCode){
        Car* car = new Car();
        car->setBrandCode(brandCode);
        car->setDriverCode(driverCode);
        car->setCarCode(this->nextCarCode++);
        Cars.push_back(*car);
        return *car;
}
 Car& DataBase::getCar(const int& brandCode, const int& driverCode) {
        for(Car& Car : this->Cars) {
            if(Car.getBrandCode() == brandCode && Car.getDriverCode() == driverCode) return Car;
        }

}
 Car& DataBase::getCar(const int& CarCode) {
        for(Car& Car : this->Cars) {
            if(Car.getCarCode() == CarCode) return Car;
        }
}

void DataBase::displayAll() const {
    for(Car Car : this->Cars) {
        Car.output();
    }
}
void DataBase::displayWithDriverCode(const int& driverCode) const {
    for(Car Car : this->Cars) {
        if(Car.getDriverCode() == driverCode) 
             Car.output();
    }
}
