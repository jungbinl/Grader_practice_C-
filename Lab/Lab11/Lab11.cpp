#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int arr[n][n];
  int z = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        arr[i][j] = z;
        z++;
    }
  }
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      if(i % 2 == 0){
        cout << arr[i][j] << " ";
      } else{
        cout << arr[i][n-j-1] << " ";
      }
    }
    cout << endl;
  }
  return 0;
}
