#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  float apples, bananas, carrots, onions, bread, milk;
  apples = 4.50;
  bananas = 1.50;
  carrots = 2.00;
  onions = 3.24;
  bread = 3.5;
  milk = 2.50;
  // Complete the code the below
  // where indicated '/*Code Here*/'
  cout << "*** Item List ***" << endl;
  cout << "1. Apples ($" << fixed << setprecision(2) << apples << ")" << endl;
  cout << "2. Bananas ($" << fixed << setprecision(2) << bananas << ")" << endl;
  cout << "3. Carrots ($" << fixed << setprecision(2) << carrots << ")" << endl;
  cout << "4. Onions ($" << fixed << setprecision(2) << onions << ")" << endl;
  cout << "5. Bread ($" << fixed << setprecision(2) << bread << ")" << endl;
  cout << "6. Milk ($" << fixed << setprecision(2) << milk << ")" << endl;
  cout << "*****************" << endl;

  float total = 0.0;
  int choice = -1;
  int vegetables = 0;

  while (choice != 0) {
    cout << "Enter item number (1-6) or 0 to checkout: " << endl;
    cin >> choice;
    switch (choice) {
    case 1:
      cout << "Added item " << choice << " to cart for " << apples << " dollars"
           << endl;
      total += apples;
      break; 
    case 2:
      cout << "Added item " << choice << " to cart for " << bananas
           << " dollars" << endl;
      total += bananas;
      break;
    case 3:
      if(vegetables >= 4){
        carrots = carrots / 2;
      }
      total += carrots;
      vegetables += 1;
      cout << "Added item " << choice << " to cart for " << carrots
         << " dollars" << endl;
      break;
    case 4:
      if(vegetables >= 4){
        onions = onions / 2;
      }
      total += onions;
      vegetables += 1;
      cout << "Added item " << choice << " to cart for " << onions << " dollars"
         << endl;
      break;
    case 5:
      cout << "Added item " << choice << " to cart for " << bread << " dollars"
           << endl;
      total += bread;
      break;
    case 6:
      cout << "Added item " << choice << " to cart for " << milk << " dollars"
           << endl;
      total += milk;
      break;
      case 0:
      if (total >= 10 && total < 20) {
          cout << "Applying 10% discount" << endl;
          total = total * 0.9;
      } else if (total >= 20) {
          cout << "Applying 15% discount" << endl;
          total = total * 0.85;
      }
      break;
      default:
        cout << "Invalid choice" << endl;
      break;
    }
    int choice = 0;
  }

  // Do not modify anything below this line
  cout << "Total cost: $" << fixed << setprecision(2) << total;
  return 0;
}
