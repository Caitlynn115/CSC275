#ifndef PERSON_H
#define PERSON_H
#include <string>


class Person
{
public:
    Person();
    Person(std::string first, std::string last, int year, int day, int month);
    std::string getName();
    std::string getBirthdate();


private:
    std::string Fname;
    std::string Lname;
    int birthDay;
    int birthMonth;
    int birthYear;
};

#endif //PERSON_H