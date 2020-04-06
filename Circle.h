#include "Figure.h"
#include <string>
#define PI 3.14

class Circle : public Figure {
private:
    string name;
    int r;
public:
    Circle (int r, string name)
    {
        this->r = r;
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    double getPerimeter() override
    {
        return 2*PI*r;
    }
    double getSquare() override
    {
        return PI*r*r;
    }
};



