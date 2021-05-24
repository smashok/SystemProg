#include "DataBase.h"
#include <iostream>

using namespace std;

int main() {
    DataBase* db = new DataBase();
    cout<<"DB Test Start"<<endl;
    db->displayAll();
    cout<<"DB Test End"<<endl;

}