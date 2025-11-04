#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int n;            // Variable to hold the size of the array
    int k;            // Variable to hold the size of continous sub-array
    int best_start;   // Variable to hold the starting index of the best sub-array
    int best_sum = 0; // Variable to hold the sum of the best sub-array
    /* Your Code Starts Here*/
    // HINT : Use need to use multiple temp variables to hold the current sum and starting index of the current sub-array
    // NOTE : K is only inputted after the array is inputted
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int temp_sum = 0;
    cin >> k;
    int j = 0;
    
    for(int i = 0; i < n-k+1; i++){
        temp_sum = 0;
        for(int j = 0; j < k; j++){
            temp_sum += a[i + j];
        }
        if(temp_sum > best_sum){
            best_sum = temp_sum;
            best_start = i;
        }
    }

    /* Your Code Ends Here*/
    // DO not modify anything below this line
    cout << "Largest Sub-Array Sum=" << best_sum << ", array_indices = (" << best_start << "," << (best_start + k) << ")";
    return 0;
}
