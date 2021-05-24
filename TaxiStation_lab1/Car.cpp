// AirlineTicket.cpp

#include <iostream>
#include "Car.h"

using namespace std;

Car::Car()
{
  mCarCode = 0;
  mBrandCode = 0;
  mRegistrationNumber = "Unknown";
  mBodyNumber = "Unknown";;
  mEngineNumber = "Unknown";;
  mCreatedYear = "Unknown";;
  mMileage = 0;
  mDriverCode = 0;
  mLastTODate = "Unknown";;
  mMechanicCode = 0;
  mSpecialMarks = "Unknown";;

}
Car::~Car() {

}

int Car::calculateCarPriceInDollars()
{
  if (getMileage() == 0) {

    return 50000;
  }
 
 
  return static_cast<int>((40000 - getMileage() * 2));
}

int Car::getCarCode()
{
  return mCarCode;
}

void Car::setCarCode(int code)
{
  mCarCode = code;
}

int Car::getMileage()
{
  return mMileage;
}

void Car::setMileage(int mileage)
{
  mMileage = mileage;
}

int Car::getBrandCode()
{
  return mBrandCode;
}

void Car::setBrandCode(int code)
{
  mBrandCode = code;
}

int Car::getMechanicCode()
{
  return mMechanicCode;
}

void Car::setMechanicCode(int code)
{
  mMechanicCode = code;
}
int Car::getDriverCode()
{
  return mDriverCode;
}

void Car::setDriverCode(int code)
{
  mDriverCode = code;
}


string Car::getRegistrationNumber()
{
  return mRegistrationNumber;
}

void Car::setRegistrationNumber(string registrationNumber)
{
  mRegistrationNumber = registrationNumber;
}

string Car::getBodyNumber()
{
  return mBodyNumber;
}

void Car::setBodyNumber(string bodyNumber)
{
  mBodyNumber = bodyNumber;
}

string Car::getEngineNumber()
{
  return mEngineNumber;
}

void Car::setEngineNumber(string engineNumber)
{
  mEngineNumber = engineNumber;
}

string Car::getCreatedYear()
{
  return mCreatedYear;
}

void Car::setCreatedYear(string createdYear)
{
  mCreatedYear = createdYear;
}

string Car::getLastTODate()
{
  return mLastTODate;
}

void Car::setLastTODate(string lastTODate)
{
  mLastTODate = lastTODate;
}

string Car::getSpecialMarks()
{
  return mSpecialMarks;
}

void Car::setSpecialMarks(string specialMarks)
{
  mSpecialMarks = specialMarks;
}
