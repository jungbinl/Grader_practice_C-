#include <iostream>
#include <iomanip>
using namespace std;
int main() {
char a;
float b = 0;
float c = 0;
while(true){
    cout << "Type one letter grade or Q (quit)." << endl;
    cin >> a;
    if (a == 'Q') break;
    switch(a){
        case 'A':
            b += 4.0;
            break;
        case 'B':
            b += 3.0;
            break;
        case 'C':
            b += 2.0;
            break;
    }
    c++;
}
cout << fixed << setprecision(2) <<"Your GPA is: " << b/c;
cout << endl;
return 0;
}
