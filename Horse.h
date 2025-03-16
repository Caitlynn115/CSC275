//
// Created by caitl on 3/16/2025.
//

#ifndef HORSE_H
#define HORSE_H
#include "Animal.h"


class Horse : public Animal {
public:
    Horse() {
}

explicit Horse(int id, string name, string shelter) : Animal(id, name, shelter) {
    }

    void makeSound() const override {
        cout <<"Neigh Neigh!";
    }
};

#endif //HORSE_H
