#include <iostream>
#include "Student.h"
using namespace std;

Student :: Student() {
    numOfCredits = 0;
}

Student :: Student(string first, string last, int day, int month, int year, int numOfCredits) : Person(first, last, day, month, year) {
    numOfCredits = numOfCredits;
}

void Student :: setNumOfCredits(int numOfCredits) {
    numOfCredits = numOfCredits;
}

int Student :: getNumOfCredits() {
    return numOfCredits;
}