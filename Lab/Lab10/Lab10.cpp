#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n; // Size of the matrices
    cin >> n;
    float matrix1[n][n];
    float matrix2[n][n];
    float result1[n][n];
    float mat1, mat2, result;
    // Start code to input matrices here:
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat1;
            matrix1[i][j] = mat1;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> mat2;
            matrix2[i][j] = mat2;
        }
    }
    
    // --------- End ---------
    // Start code to invert matrix 2 here:
    int choice;
    cin >> choice;
    if (choice == 1)
    {
        /* Code to do action for Choice == 1 */
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                result1[i][j] = matrix1[i][j] + matrix2[j][i];
            }
        }
    }
    else if (choice == 2)
    {
        /* Code to do action for Choice == 2 */
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                result1[i][j] = matrix1[i][j] - matrix2[j][i];
            }
        }
    }
    else
    {
        cout << "Invalid choice";
        return 0;
    }

    // Output the result matrix using the following cout output format (Hint you need to use loops)
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << fixed << setprecision(2) << result1[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
