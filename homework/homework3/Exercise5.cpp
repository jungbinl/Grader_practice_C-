#include <iostream>
#include <iomanip>
using namespace std;
int main() {
cout << "Type one integer here." << endl;
int a;
cin >> a;
for(int j = 0; j < a; j++){
    string b = "";
    for(int i = j; i < a; i++){
        b += "*";
    }
    cout << setw(a) << b;
    cout << endl;
}
return 0;
}
