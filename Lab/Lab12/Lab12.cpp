#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double arr1[n][n], arr2[n][n], sol[n][n];
    /* SOLUTION BELOW */
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr2[i][j];
        }
    }
    /* SOLUTION ABOVE */
    double temp = 0.0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp = 0;
            for (int k = 0; k < n; k++) {
                temp += arr1[i][k] * arr2[k][j];
            }
            sol[i][j] = temp;
        }
    }
    // DO NOT MODIFY BELOW
    cout << "Output Matrix: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << fixed << setprecision(2) << sol[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
