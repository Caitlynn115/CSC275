#include <iostream>
using namespace std;

struct Srecord {
     string fName;
     string lName;
     string grade;
     double quiz1;
     double quiz2;
     double midTerm;
     double finalTest;
     double average;

     int main ()
     {
          cout << "Enter First Name: ";
          cin >> fName;
          cout << "Enter Last Name: ";
          cin >> lName;
          cout << "Enter Quiz 1 Score: ";
          cin >> quiz1;
          cout << "Enter Quiz 2 Score: ";
          cin >> quiz2;
          cout << "Enter Mid-Term Score: ";
          cin >> midTerm;
          cout << "Enter Final Test Score: ";
          cin >> finalTest;
     }

     double quiz1Weight()
     {
          double weight = 25.0 / 2.0;
          double percentage = weight * quiz1;
          return percentage / 10.0;
     }

     double quiz2Weight()
     {
          double weight = 25.0 / 2.0;
          double percentage = weight * quiz2;
          return percentage / 10.0;
     }

     double midTermWeight()
     {
          double weight = 25.0;
          double percentage = weight * midTerm;
          return percentage / 100.0;
     }

     double finalTestWeight()
     {
          double weight = 50.0;
          double percentage = weight * finalTest;
          return percentage / 100.0;


          {
               double totalAverage = quiz1Weight() + quiz2Weight() + midTermWeight() + finalTestWeight();
               return quiz1Weight() + quiz2Weight() + midTermWeight() + finalTestWeight();
          }


          void fungrade
          {
               double totalAverage =  quiz1Weight() + quiz2Weight() + midTermWeight() + finalTestWeight();
               if (totalAverage >= 90.0)
                    grade = 'A';
               else if (totalAverage >= 80.0 && totalAverage < 90.0)
                    grade = 'B';
               else if (totalAverage >= 70.0 && totalAverage < 80.0)
                    grade = 'C';
               else if (totalAverage >= 60.0 && totalAverage < 70.0)
                    grade = 'D';
               else
                    grade = 'F';
          }

     cout << "Class Percentage: " << totalAverage << "%";
     cout << "Final Letter Grade: " << grade;

     }
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.