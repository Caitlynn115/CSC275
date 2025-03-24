#include <array>
#include <array>
#include <array>
#include <iostream>
#include  "Array.h"

int main() {
    int arr[n] = {4, 67, 234, 24, 95, 45, 35, 59, 60, 294};
    int intKey = 60;
    int intIndex = array(arr, 10, intKey);

    std:: cout << "Integer " << intKey << " located at Index: " << intIndex;

double a[10] = {3.5, 35.6, 234.98, 4.6, 7.9, 2.3, 4.1, 5.6, 0.985, 4.009};
    double doubleKey = 4.1;
int doubleIndex = array(a, 10, doubleKey);
    std:: cout << "Double " << doubleKey << " located at Index: " << doubleIndex;

std:: string s[] = {"Halil", "UM-flint", "third", "4th", "is", "are", "?", "88", "CSC275", "csep"};
std:: string stringKey = "third";
    int stringIndex = array(s, 10, stringKey);
    std:: cout << "String " << stringKey << " located at Index: " << stringIndex;

    Profile list [10];
    std:: string names[10] = {"Adam", "Eve", "John", "Daniel", "Kate", "Sue", "Nicole", "Nick", "Chris", "Sam"};

    for (int i = 0; i < 10; i++) {
        list[i].id = i;
        list[i].name = names[i];
    }

Profile searchProfile = {0, "John"};
    int profileIndex = array(list, 10, searchProfile);

    if (profileIndex != -1) {
        std:: cout << "The Profile with the name " << searchProfile.id << " located at Index: " << profileIndex;
    } else {
        std:: cout << "The Profile with the name " << searchProfile.id << " does not exist";
    }
  return 0;
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.