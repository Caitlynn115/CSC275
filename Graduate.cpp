#include <iostream>
#include "Graduate.h"
#include "Student.h"
using namespace std;

Graduate :: Graduate() {
    can_graduate = false;
}

Graduate :: Graduate(string first, string last, int day, int month, int year, int numOfCredits) : Student(first, last, day, month, year, numOfCredits) {
    if (numOfCredits > 30 || numOfCredits > 120) {
        can_graduate = true;
    }

    bool Graduate :: isAGraduate() {
        return can_graduate;
    }
}