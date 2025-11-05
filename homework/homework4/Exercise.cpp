#include <iostream>
#include <iomanip>
using namespace std;

int countAlpha(string str){
int out=0;
    for (int i = 0; i<str.length(); i++){
        if(isalpha(str.at(i))) out++;
    }
    return out;
}

int countDigit(string str){
    int out=0;
    for (int i = 0; i<str.length(); i++){
        if(isdigit(str.at(i))) out++;
    }
    return out;
}
int countSpecial(string str){
    int out=0;
    for (int i = 0; i<str.length(); i++){
        if(!isalpha(str.at(i)) && !isdigit(str.at(i))) out++;
    }
    return out;
}

int countTrue(bool a, bool b, bool c ,bool d){
    int out=0;
    if(a) out++;
    if(b) out++;
    if(c) out++;
    if(d) out++;
    return out;
}
int countlower(string str){
    int out=0;
    for (int i = 0; i<str.length(); i++){
        if(islower(str.at(i))) out++;
    }
    return out;
}
int countupper(string str){
    int out=0;
    for (int i = 0; i<str.length(); i++){
        if(isupper(str.at(i))) out++;
    }
    return out;
}

int main() {
    string a;

    while(true){
        cout << "Type one password here." <<endl;
        getline(cin, a);
        if(a.length() == 0) break;
        int score = 0;
        if (countupper(a)>=1){
            score++;
        }
        if (countlower(a)>=1){
            score++;
        }
        if(countDigit(a) >= 1){
            score++;
        }
        if (countSpecial(a)>=1){
            score++;
        }
        if (a.length() < 8){
            score = 0;
        }
        cout << "Strength of password is " << score << endl;
    }
    cout << "***END***" << endl;
    return 0;
}
