// NOMBRE: Point.h

#ifndef POINT_H
#define POINT_H

#include <stdio.h>
#include <string>
#include <math.h>

class Point
{
private:
    double x,y;
public:
    Point();
    Point(double _x, double _y);

    double getX();
    double getY();

    void setX(double _x);
    void setY(double _y);

    double calculaDistancia(Point p2);
    std::string str();
};

#endif // POINT_H
