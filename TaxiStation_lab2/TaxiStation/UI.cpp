//
// Created by hlib on 23.02.21.
//

#include <iostream>
#include <stdexcept>
#include <exception>
#include "DataBase.h"

using namespace std;

int displayMenu();
void displayAll(DataBase* db);
void displayWithDriverCode(DataBase* db);
void addCar(DataBase* db);
void getCar(DataBase* db);

int main()
{
    DataBase* db = new DataBase();
    bool done = false;
    while (!done) {
        int selection = displayMenu();
        cout<<selection<<endl;
        switch (selection) {
            case 0:
                done = true;
                break;
            case 1:
                displayAll(db);
                break;
            case 2:
                displayWithDriverCode(db);
                break;
            case 3:
                addCar(db);
                break;
            case 4:
                getCar(db);
                break;
            default:
                cerr << "Unknown command." << endl;
                break;
        }
    }
    return 0;
}

int displayMenu()
{
    int selection;
    cout << endl;
    cout << "Library Database" << endl;
    cout << "-----------------" << endl;
    cout << "1) Display all cars" << endl;
    cout << "2) Display with specific driver code " << endl;
    cout << "3) Add Car" << endl;
    cout << "4) Get Car" << endl;
    cout << "0) Quit" << endl;
    cout << endl;
    cout << "---> ";
    cin >> selection;
    return selection;
}

void displayAll(DataBase* db)
{
    cout << "All cars! "<<endl;
    cout << "-----------------------------------"<<endl;
    db->displayAll();
}

void displayWithDriverCode(DataBase* db)
{
    int driverCode = 0;
    cout<<"Enter Driver Code ";
    cin>>driverCode;
    cout << "cars with specific Driver code "<<endl;
    cout << "-----------------------------------"<<endl;
    db->displayWithDriverCode(driverCode);
}


void addCar(DataBase* db)
{
    int brandCode = 0;
    int driverCode = 0;
    cout << "Enter brand code ";
    cin>> brandCode;
    cout << "Enter driver Code ";
    cin >> driverCode;
    db->addCar(brandCode, driverCode);
}

void getCar(DataBase* db)
{
    int CarCode;
    cout << "Enter Car Code ";
    cin >> CarCode;
    db->getCar(CarCode).output();
}