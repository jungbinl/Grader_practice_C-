#include <iostream>
using namespace std;

int main() { 
  // Complete the code the below where indicated '/*Code Here*/'.
  // DO NOT CHANGE THE VARIABLE NAMES
int total_second=36467;
int hour=total_second / 3600;;
int minutes=(total_second % 3600)/60;
int seconds=(total_second % 3600)%60;

cout << "The Hour is:" << hour << endl;
cout << "The minute is:" << minutes << endl;
cout << "The second is:" << seconds;
return 0;
}
