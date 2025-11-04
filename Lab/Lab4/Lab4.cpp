#include <iostream>
using namespace std;

int main() {
  // Complete the code the below
  int a, b, c, d;
  cout << "Stock Input:" << endl;
  cin >> a >> b >> c >> d;
  // Create variable or variables to input stock values
  cout << "*** Vending Machine Menu ***" << endl;
  cout << "1. Aqua Fizz (" << a << " available)" << endl;
  cout << "2. Cosmic Cola (" << b << " available)" << endl;
  cout << "3. Galaxy Grape (" << c << " available)" << endl;
  cout << "4. Solar Soda (" << d << " available)" << endl;
  cout << "Enter choice (1-4): " << endl;
  int choice1, choice2;
  cin >> choice1 >> choice2;
  if (choice1 > 4 || choice1 < 1) {
    cout << "Invalid choice";
  } else {
    if (choice1 == 1 && a < choice2) {
      cout << "Choice " << choice1 << " is out of stock";
    } else if (choice1 == 2 && b < choice2) {
      cout << "Choice " << choice1 << " is out of stock";
    } else if (choice1 == 3 && c < choice2) {
      cout << "Choice " << choice1 << " is out of stock";
    } else if (choice1 == 4 && d < choice2) {
      cout << "Choice " << choice1 << " is out of stock";
    } else {
      cout << "Dispensing " << choice2 << " of choice " << choice1;
    }
  }
  // Accept user choice and return output string as specified in question
  return 0;
}
