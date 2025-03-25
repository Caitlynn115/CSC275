#include <iostream>
#include "Polygon.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main() {
    Rectangle r1(9, 5);

    cout << "\nArea Of The Rectangle: " << r1.getArea();
    cout << "\nDrawing: \n";

    r1.draw();

    Triangle t1(10, 5);

    cout << "\nArea Of The Triangle: " << t1.getArea();
    cout << "\nDrawing: \n";

    t1.draw();

    return 0;
}
// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.