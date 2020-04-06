#include "Figure.h"
#include <string>

using namespace std;

class Triangle : public Figure {
private:
    string name;
    int a, b, c, h;
public:
    Triangle (int a, int b, int c, int h, string name)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->h = h;
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    double getPerimeter() override
    {
        return a+b+c;
    }
    double getSquare() override
    {
        return 0.5*a*h;
    }

};



