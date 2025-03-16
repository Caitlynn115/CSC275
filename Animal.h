//
// Created by caitl on 3/16/2025.
//
#include <iostream>
#include <string>

#ifndef ANIMAL_H
#define ANIMAL_H

using std::cout;
using std::endl;
using std::cin;
using std::string;

class Animal {
private:
    int id;
    string name;
    string shelter;

public:
    Animal() : id(0), name(""), shelter("") {
    }

    Animal(int id, string name, string shelter) : id(id), name(name), shelter(shelter) {
    }

    int getId() const {
        return id;
    }

    string getName() const {
        return name;
    }

    string getShelter() const {
        return shelter;
    }

    void setId(id) {
        id = id;
    }

    void setName(string newName) {
        name = newName;
    }

    void setShelter(string newShelter) {
        shelter = newShelter;
    }

    virtual void makeSound() const = 0;

    virtual ~ Animal() {
    }
};

#endif //ANIMAL_H
