#include "Figure.h"
#include <string>

class Parallelogram : public Figure {
private:
    string name;
    int a;
    int b;
    int h;
public:
    Parallelogram (int a, int b, int h, string name)
    {
        this->a = a;
        this->b = b;
        this->h = h;
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    double getPerimeter() override
    {
        return 2*(a+b);
    }
    double getSquare() override
    {
        return a*h;
    }
};



