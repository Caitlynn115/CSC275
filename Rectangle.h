#include <iostream>
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Polygon.h"
using namespace std;


class Rectangle : public Polygon {
    public:
    Rectangle(int width, int height) : Polygon(width, height) {
    }

    void draw() {
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                cout << "*";
            }
        }
    }

    int getArea() {
        return (width * height);
    }
};

#endif //RECTANGLE_H