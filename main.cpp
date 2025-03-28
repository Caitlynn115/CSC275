#include <iostream>
using namespace std;

struct Student{
    int id;
    string name;
    Student *next;
};


int main() {
    Student *s1 = new Student();
    s1 -> id = 1;
    s1 -> name = "Nami";


    Student *s2 = new Student();
    s2 -> id = 2;
    s2 -> name = "Oliver";


    Student *s3 = new Student();
    s3 -> id = 3;
    s3 -> name = "Alexander";

    s1 -> next = s2;
    s2 -> next = s3;
    s3 -> next = NULL;

    Student *travel = s1;

    while (travel != NULL) {
        {
            cout << "\nID: " << travel -> id << "\nName: " << travel -> name;
            travel = travel -> next;
        }
    }
}

// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.