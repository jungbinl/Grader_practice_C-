#include <iostream>
#include <cmath>
#include <iomanip>
#include "Lab9.h"
using namespace std;

// REFERENCE ON HOW TO USE ARRAY OF OBJECTS : https://www.geeksforgeeks.org/cpp/array-of-objects-in-c-with-examples/

int main()
{
    int x, y, n;
    cout << "Enter Number of Points: " << endl;
    cin >> n;
    Point points[n];
    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        points[i].set_points(a, b);
        points[i].print();
    cout << endl
         << "Distance from origin: " << fixed << setprecision(3) << points[i].dist_from_origin() << endl;
    }
    int p1, p2;
    cout << "Enter two points to find distance between them: " << endl;
     cin >> p1 >> p2;
     if(p1 > n-1 || p2 > n-1 || p1 < 0 || p2 < 0){
        cout << "Invalid Input" << endl;
     } else{
          cout << "Distance between points " << fixed << setprecision(3) << p1 << " and " << p2 << " is " << points[p1].dist(points[p2]);
     }
    return 0;
}
