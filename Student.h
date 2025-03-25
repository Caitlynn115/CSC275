#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"
using namespace std;


class Student : public Person{
private:
    int numOfCredits;
public:
    Student();
    Student(string first, string last, int day, int month, int year, int numOfCredits);
    void setNumOfCredits(int numOfCredits);
    int getNumOfCredits();
};

#endif //STUDENT_H