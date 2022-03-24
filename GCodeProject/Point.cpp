#include "Point.h"
#include <iostream>
using namespace std;



double Point::get_x()
{
    return x;
}

double Point::get_y()
{
    return y;
}

double Point::get_z()
{
    return z;
}

void Point::set_x(double _x)
{
    x = _x;
}

void Point::set_y(double _y)
{
    y = _y;
}

void Point::set_z(double _z)
{
    z = _z;
}

void Point::showDisplay()
{
    cout << " x= " << x << " y= " << y << " z= "<<endl;;

}