#include <iostream>
#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Polygon.h"
using namespace std;


class Triangle : public Polygon {
    public:
    Triangle(int width, int height) : Polygon(width, height) {
    }

    void draw() {
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < (width/2) - i - 1; j++) {
                cout << " ";
            }

            for (int j = 0; j < i + 1; j++) {
                cout << "*";
            }

            for (int j = 0; j < i; j++) {
                cout << "*";
            }
        }
    }

    int getArea() {
        return (width*height)/2;
    }
};

#endif //TRIANGLE_H