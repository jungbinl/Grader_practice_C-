#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;           // Variable to hold the size of the arrays
    float avg = 0.0; // Variable to hold the average of the sums
    cin >> n;
    float a[n];
    float b[n];
    float sum;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
        sum += b[i];
    }
    avg = sum / n;
    
    // DO not modify anything below this line
    cout << "Average of the sum of both arrays is=" << fixed << setprecision(3) << avg;
    return 0;
}
