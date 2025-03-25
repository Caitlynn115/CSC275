/*************************************************************
Author: Caitlynn Johnson
Program: HW3, Q1
Date Created: March 23, 2025
Date Last Modified: March 24, 2025
Usage: No Command Line Arguments

Problem: Copy in starter files to main.cpp. Create three classes using inheritance of which I chose
Employee, Student, And Graduate. Each of these classes must have one or more private or protected
element, at least one mutator, and at least one accessor.
***************************************************************/
#include <iostream>
#include "Person.h"
#include "Employee.h"
#include "Student.h"
#include "Graduate.h"
using namespace std;


int main()
{
    Person p1("Tony", "Stark", 1, 21, 1950);
    cout << p1.getName() << " born on: " << p1.getBirthdate() << endl;

    Employee p2(0001, "Tony", "Stark", 1, 21, 1950);
    cout << "Employee ID: " << p2.getID() << ", Employee Name: " << p2.getName() << ", Birthdate: " << p2.getBirthdate();

    Graduate p3("Tony", "Stark", 1, 21, 1950, 35);
    cout << "Student Name: " << p2.getName() << ", Birthdate: " << p2.getBirthdate() << ", Number Of Credits: " << p2.getNumberCredits();
    if (p3.isAGraduate())
        cout << "This Student Has Graduated";
    else
        cout << "This Student Cannot Graduate";

    return 0;
}


// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.