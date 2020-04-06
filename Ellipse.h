#include "Figure.h"
#include <string>
#include <math.h>
#define PI 3.14

class Ellipse : public Figure {
private:
    string name;
    int a;
    int b;
public:
    Ellipse (int a, int b, string name)
    {
        this->a = a;
        this->b = b;
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    double getPerimeter() override
    {
        return 2*PI*sqrt((a*a+b*b)/2);
    }
    double getSquare() override
    {
        return PI*a*b;
    }
};



