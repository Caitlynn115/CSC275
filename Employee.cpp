#include <iostream>
#include "Employee.h"
using namespace std;

Employee :: Employee() {
    ID = 1;
}

Employee :: Employee(int ID, string first, string last, int day, int month, int year) : Person(first, last, day, month, year);
ID = ID;

int Employee::getID() {
    return ID;
}

void Employee :: setID(int ID) {
    ID = ID;
}