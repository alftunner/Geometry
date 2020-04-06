#include <iostream>
#include "Triangle.h"
#include "Kvadrat.h"
#include "Rhombus.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Trapezoid.h"
#include "Circle.h"
#include "Ellipse.h"

void showTriangle(Triangle triangle);
void showKvadrat(Kvadrat kvadrat);
void showRhombus(Rhombus rhombus);
void showQuadrangle(Quadrangle quadrangle);
void showParallelogram(Parallelogram parallelogram);
void showTrapezoid(Trapezoid trapezoid);
void showCircle(Circle circle);
void showEllipse(Ellipse ellipse);

int main() {
    Triangle triangle(7, 5, 3, 6, "Triangle");
    showTriangle(triangle);

    Kvadrat kvadrat(5, "Square");
    showKvadrat(kvadrat);

    Rhombus rhombus(5, 2, "Rhombus");
    showRhombus(rhombus);

    Quadrangle quadrangle(2, 4, "Quadrangle");
    showQuadrangle(quadrangle);

    Parallelogram parallelogram(4, 2 , 1, "Parallelogram");
    showParallelogram(parallelogram);

    Trapezoid trapezoid(4, 6, 3, 2, 1, "Trapezoid");
    showTrapezoid(trapezoid);

    Circle circle(5, "Circle");
    showCircle(circle);

    Ellipse ellipse(3, 5, "Ellipse");
    showEllipse(ellipse);


    return 0;
}

void showTriangle(Triangle triangle)
{
    cout << "---------" << triangle.getName() << "-------------" << endl;
    cout << "Perimeter: " << triangle.getPerimeter() << endl;
    cout << "Square: " << triangle.getSquare() << endl;
    cout << endl;
}
void showKvadrat(Kvadrat kvadrat)
{
    cout << "---------" << kvadrat.getName() << "-------------" << endl;
    cout << "Perimeter: " << kvadrat.getPerimeter() << endl;
    cout << "Square: " << kvadrat.getSquare() << endl;
    cout << endl;
}
void showRhombus(Rhombus rhombus)
{
    cout << "---------" << rhombus.getName() << "-------------" << endl;
    cout << "Perimeter: " << rhombus.getPerimeter() << endl;
    cout << "Square: " << rhombus.getSquare() << endl;
    cout << endl;
}
void showQuadrangle(Quadrangle quadrangle)
{
    cout << "---------" << quadrangle.getName() << "-------------" << endl;
    cout << "Perimeter: " << quadrangle.getPerimeter() << endl;
    cout << "Square: " << quadrangle.getSquare() << endl;
    cout << endl;
}

void showParallelogram(Parallelogram parallelogram)
{
    cout << "---------" << parallelogram.getName() << "-------------" << endl;
    cout << "Perimeter: " << parallelogram.getPerimeter() << endl;
    cout << "Square: " << parallelogram.getSquare() << endl;
    cout << endl;
}
void showTrapezoid(Trapezoid trapezoid)
{
    cout << "---------" << trapezoid.getName() << "-------------" << endl;
    cout << "Perimeter: " << trapezoid.getPerimeter() << endl;
    cout << "Square: " << trapezoid.getSquare() << endl;
    cout << endl;
}
void showCircle(Circle circle)
{
    cout << "---------" << circle.getName() << "-------------" << endl;
    cout << "Perimeter: " << circle.getPerimeter() << endl;
    cout << "Square: " << circle.getSquare() << endl;
    cout << endl;
}
void showEllipse(Ellipse ellipse)
{
    cout << "---------" << ellipse.getName() << "-------------" << endl;
    cout << "Perimeter: " << ellipse.getPerimeter() << endl;
    cout << "Square: " << ellipse.getSquare() << endl;
    cout << endl;
}