#pragma once
#include "Car.h"
#include <string>
#include <vector>

using namespace std;
class DataBase {
    public:
        DataBase();

        ~DataBase();
        Car& addCar(const int& brandCode, const int& driverCode);
        Car& getCar(const int& CarCode) ;
        Car& getCar(const int& brandCode, const int& driverCode) ;
        void displayAll() const;
        void displayWithDriverCode(const int& driverCode) const;

    private:
        int nextCarCode = 0;
        vector<Car> Cars;
};