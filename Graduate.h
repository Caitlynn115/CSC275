#ifndef GRADUATE_H
#define GRADUATE_H
#include "Student.h"
using namespace std;


class Graduate : public Student{
private:
    bool can_graduate;
public:
    Graduate();
    Graduate(string first, string last, int day, int month, int year, int numOfCredits);
    bool isAGraduate();
};

#endif //GRADUATE_H