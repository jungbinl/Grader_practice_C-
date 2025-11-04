#include <iostream>
using namespace std;

class City {
    private:
        string name = "";
        int population = 0;
    public:
        void setName(string a){name = a;}
        void setPopulation(int a){population = a;}
        string toString(){
            return "Name:" + name + " Population:" + to_string(population);
        }
};

int main() {
    City c1; //Instance Object
    char cmd; //command character A, B, C, or Q
    string input; // user input for setter functions
while (true) {
    cout << "Choose Menu. A:Set Name, B:Set Population, Q:Quit" << endl;
    cin >> cmd;
    if (cmd == 'A') {
        cout << "Give the name of city" << endl;
        cin >> input;
        c1.setName(input);
        cout << c1.toString() << endl;
    } else if (cmd == 'B') {
        cout << "Set the population of city." << endl;
        cin >> input;
        c1.setPopulation(stoi(input));
        cout << c1.toString() << endl;
    } else if (cmd == 'Q') break;
    else
        cout << "Invalid Input. Try Again." << endl;
    }
return 0;
}
