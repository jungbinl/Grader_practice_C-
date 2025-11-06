#include <iostream>
using namespace std;
int main() {
int a;
int b = 0;
while(true){
    cout << "Type one positive integer here or -1 (quit)." << endl;
    cin >> a;
    if(a == -1){
        break;
    }
    b = a + b;
}
cout << "Total: " << b;
cout << endl;
return 0;
}
