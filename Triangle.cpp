//NOMBRE: Triangle.cpp 

#include "Triangle.h"
#include "Point.h"

Triangle::Triangle()
{
    v1 = Point(0,0);
    v2 = Point(50,30);
    v3 = Point(25,10);
}

Triangle::Triangle(Point _v1,Point _v2, Point _v3 )
{
    v1 = _v1;
    v2 = _v2;
    v3 = _v3;
}

Point Triangle::getVertice1()
{
    return v1;
}
Point Triangle::getVertice2()
{
    return v2;
}
Point Triangle::getVertice3()
{
    return v3;
}
void Triangle::setVertice1(Point _v1)
{
    v1 = _v1;
    _v1 = v2;
}
void Triangle::setVertice2(Point _v2)
{
   v2 = _v2;
}
void Triangle::setVertice3(Point _v3)
{
   v3 = _v3;
}
double Triangle::perimetro()
{
    return v2.calculaDistancia(v1) + v3.calculaDistancia(v2) + v1.calculaDistancia(v3);
}
double Triangle::area()
{
    return 1.0/2 * abs(((v1.getX() * v2.getY()) + (v2.getX() * v3.getY()) + v3.getX() * v1.getY()) ) - ((v1.getX() * v3.getY()) + (v3.getX()* v2.getY()) + (v2.getX() * v1.getY()));
}
std::string Triangle::str()
{
    return v1.str() + ',' + v2.str() + ',' + v3.str();
}
