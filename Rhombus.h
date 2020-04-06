#include "Figure.h"
#include <string>

class Rhombus : public Figure{
private:
    string name;
    int a;
    int h;
public:
    Rhombus (int a, int h,  string name)
    {
        this->a = a;
        this->h = h;
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
        return h*a;
    }
};


