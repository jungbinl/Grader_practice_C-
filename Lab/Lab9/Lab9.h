#include <iostream>
#include <cmath>
using namespace std;

class Point
{
private:
    int x, y;

public:
    void set_points(int _x, int y)
    {
        x = _x;
        y = _y;
    }
    void print()
    {
        cout << "(" << x << "," << y << ")" << endl;
    }
    int get_x()
    {
        return x;
    }
    int get_y()
    {
        return y;
    }
    float dist_from_origin()
    {
       return sqrt(x * x + y * y);
    }
    float dist(Point p)
    {
        return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
    }
};
