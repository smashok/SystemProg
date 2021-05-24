// Client.h

#include <string>
class Car
{
 public:
  Car();
  ~Car();

  int  calculateCarPriceInDollars();

  int          getCarCode();
  void         setCarCode(int code);
  int          getBrandCode();
  void         setBrandCode(int code);
  std::string  getRegistrationNumber();
  void         setRegistrationNumber(std::string registrationNumber);
  std::string  getBodyNumber();
  void         setBodyNumber(std::string bodyNumber);
  std::string  getEngineNumber();
  void         setEngineNumber(std::string engineNumber);
  std::string  getCreatedYear();
  void         setCreatedYear(std::string createdYear);
  int          getMileage();
  void         setMileage(int mileage);
  int          getDriverCode();
  void         setDriverCode(int code);
  std::string  getLastTODate();
  void         setLastTODate(std::string lastTODate);
  int          getMechanicCode();
  void         setMechanicCode(int code);
  std::string  getSpecialMarks();
  void         setSpecialMarks(std::string specialMarks);
  void         output();
 private:
  int         mCarCode;
  int         mBrandCode;
  std::string mRegistrationNumber;
  std::string mBodyNumber;
  std::string mEngineNumber;
  std::string mCreatedYear;
  int         mMileage;
  int         mDriverCode;
  std::string mLastTODate;
  int         mMechanicCode;
  std::string mSpecialMarks;
}; 
