#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Point3D {
public:
    double x = 0;
    double y = 0;
    double z = 0;

    // Custom constructor
    Point3D(double a, double b, double c) {
        x = a;
        y = b;
        z = c;
    }

    // Default constructor
    Point3D() {
        x = 0.0;
        y = 0.0;
        z = 0.0;
    }

    // Display function
    void display() const {
        cout << fixed << setprecision(2);
        cout << "(" << x << ", " << y << ", " << z << ")";
    }
};

class Line3D {
private:
    Point3D p0;
    Point3D p1;

public:
    // Custom constructor
    Line3D(Point3D a, Point3D b) {
        p0 = a;
        p1 = b;
    }

    // Length calculation
    double calcLength() const {
        double dx = p1.x - p0.x;
        double dy = p1.y - p0.y;
        double dz = p1.z - p0.z;
        return sqrt(dx * dx + dy * dy + dz * dz);
    }

    // Display function
    void display() const {
        cout << "p0:";
        p0.display();
        cout << endl << "p1:";
        p1.display();
        cout << endl << "length:" << fixed << setprecision(2) << calcLength() << endl;
    }
};

int main() {
    char cmd;

    while (true) {
        cout << "Choose Menu. A:Set Line3D, Q:Quit" << endl;
        cin >> cmd;

        if (cmd == 'A' || cmd == 'a') {
            double x0, y0, z0;
            double x1, y1, z1;

            cout << "Input X, Y, and Z values of p0." << endl;
            cin >> x0 >> y0 >> z0;

            cout << "Input X, Y, and Z values of p1." << endl;
            cin >> x1 >> y1 >> z1;

            Point3D p0(x0, y0, z0);
            Point3D p1(x1, y1, z1);
            Line3D line(p0, p1);

            line.display();
        } 
        else if (cmd == 'Q' || cmd == 'q') {
            cout << "Program terminated." << endl;
            break;
        } 
        else {
            cout << "Invalid Input. Try Again." << endl;
        }
    }

    return 0;
}
