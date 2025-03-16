//
// Created by caitl on 3/16/2025.
//

#ifndef CAT_H
#define CAT_H
#include "Animal.h"

class Cat : public Animal{
     public:
     Cat() {
     }

explicit Cat(int Id, string name, string shelter) : Animal(id, name, shelter) {
     }

void makeSound() const override {
          cout << "Meow Meow!";
     }
};

#endif //CAT_H
