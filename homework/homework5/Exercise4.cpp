#include <iostream>
#include <iomanip>  // for setprecision
using namespace std;

class Point3D {
public:
    double x;
    double y;
    double z;

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
        cout << "P:(" << x << ", " << y << ", " << z << ")" << endl;
    }
};

int main() {
    Point3D p;  // Create a Point3D instance
    char cmd;

    while (true) {
        cout << "Choose Menu. A:Set Point3D, Q:Quit" << endl;
        cin >> cmd;

        if (cmd == 'A' || cmd == 'a') {
            double x, y, z;
            cout << "Input X, Y, and Z values." << endl;
            cin >> x >> y >> z;
            p = Point3D(x, y, z); // use custom constructor
            p.display();
            p = Point3D();
            p.display();
        } 
        else if (cmd == 'Q' || cmd == 'q') {
            break;
        } 
        else {
            cout << "Invalid input. Try again." << endl;
        }
    }

    return 0;
}
