#include "Figure.h"
#include <string>

class Trapezoid : public Figure {
private:
    string name;
    int a;
    int b;
    int c;
    int d;
    int h;
public:
    Trapezoid (int a, int b, int c, int d, int h, string name)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->h = h;
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    double getPerimeter() override
    {
        return a+b+c+d;
    }
    double getSquare() override
    {
        return 0.5*h*(a+b);
    }
};


