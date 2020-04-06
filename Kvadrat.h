#include "Figure.h"
#include <string>


class Kvadrat : public Figure{
private:
    string name;
    int a;
public:
    Kvadrat (int a, string name)
    {
        this->a = a;
        this->name = name;
    }
    string getName()
    {
        return name;
    }
    double getPerimeter() override
    {
        return 4*a;
    }
    double getSquare() override
    {
        return a*a;
    }
};



