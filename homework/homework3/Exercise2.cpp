#include <iostream>
using namespace std;
int main() {
int a;
cout << "Type one integer here." << endl;
cin >> a;
while(a != 1){
    cout << a << " ";
    if(a % 2 == 1){
        a = a*3 +1;
    }else{
        a = a / 2;
    }
}
cout << a << " ";
cout << endl;
return 0;
}
