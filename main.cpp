#include <iostream>
#include <string>

#include "Horse.h"
#include "Cat.h"

int main() {
    Horse Horse1(1, "Arashi", "Pine Shelter");
    Cat Cat1(2, "Nami", "Heart Shelter");

    cout << Horse1.getName() << " says: ";
    Horse1.makeSound();

    cout << Cat1.getName() << " says: ";
    Cat1.makeSound();

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.