#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"

using namespace std;


class Employee :  public Person{
private:
    int ID;

public:
    Employee();
    Employee(int ID, string first, string last, int day, int month, int year);
    int getID();
    void setID(int ID);
};

#endif //EMPLOYEE_H