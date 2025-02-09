#include <iostream>

class Vector {
private:
    int x, y;
public:
    Vector(): x(0), y(0) {}
    Vector (int x, int y) : x(x), y(y) {}

    int getX() const { return x; }
    int getY() const {return y; }

    void setX(int x) { this-> x = x; }
    void setY(int y) { this-> y = y; }

    void display() const { cout << "(" << x << "," << y << " )"; }
};

Vector operator+(const Vector &v1, const Vector &v2) {
     return Vector(v1.getX() + v2.getX(), v1.getY() + v2.getY());
}

Vector operator-(const Vector &v1, const Vector &v2) {
    return Vector(v1.getX() - v2.getX(), v1.getY() - v2.getY());
}

Vector operator-(const Vector &v1) {
    return Vector(-v1.getX(), -v1.getY());
}

bool operator == (const Vector &v1, const Vector &v2) {
    return (v1.getX() == v2.getX() && v1.getY() == v2.getY());
}

//copy with member functions

class Vector {
private:
    int x, y;
public:
    Vector() : x(0), y(0) {}

    Vector(int x, int y) : x(x), y(y) {}

    int getX() const { return x; }
    int getY() const { return y; }

    void setX(int x) { this-> x = x; }
    void setY(int y) { this-> y = y; }

     void display() const { cout << "(" << x << "," << y << " )"; }

    Vector operator+(const Vector &v) {
        return Vector(x + v.x, y - v.y);
    }

     Vector operator-(const Vector &v) {
        return Vector(x - v.x, y - v.y);
    }

     Vector operator-() {
        return Vector(-x, -y);
    }

     bool operator == (const Vector &v) {
        return (x == v.x && y == v.y);
    }
};
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.