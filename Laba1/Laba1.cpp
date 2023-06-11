#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Rectangle
{
private:
    double length;
    double width;
public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }
    double getPerimeter()
    {
        return 2 * (length + width);
    }
    double getArea()
    {
        return length * width;
    }
    double getDiagonalLength()
    {
        return sqrt((length * length) + (width * width));
    }
};

int main() {
    setlocale(LC_ALL, "RUS");
    {
        Rectangle rectangle(5.0, 3.0);
        cout << "Периметр: " << rectangle.getPerimeter() << endl;
        cout << "Площадь: " << rectangle.getArea() << endl;
        cout << "Длина диагонали: " << rectangle.getDiagonalLength() << endl;
     
               return 0;
    }
}





