#include "Figure.h"
#include <string>

class Quadrangle : public Figure {
private:
    string name;
    int a;
    int b;
public:
    Quadrangle (int a, int b, string name)
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
        return 2*(a+b);
    }
    double getSquare() override
    {
        return a*b;
    }
};



