#pragma once
class Point
{
private:
    double x, y,z;
public:
    Point() {
        x = 0;
        y = 0;
        z = 0;
    }
    Point(double _x, double _y, double _z) {
        x = _x;
        y = _y;
        z = _z;
    }

    double get_x();
    double get_y();
    double get_z();
    void set_x(double _x);
    void set_y(double _y);
    void set_z(double _z);
    void  showDisplay();



};
