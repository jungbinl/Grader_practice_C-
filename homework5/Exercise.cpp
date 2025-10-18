#include <iostream>
using namespace std;
class Monster {
private:
    string name;
    int level;
    int health;
public:
    void setName(string _n) { name = _n; }
    void setLevel(int _l) { level = _l; }
    void setHealth(int _h) { health = _h; }
    string getName() { return name; }
    int getLevel() { return level; }
    int getHealth() { return health; }
    string toString() {
        return "Name:" + name + " Level:" + to_string(level) + " Health:" + to_string(health);
    }
};
class City {
    private:
        string name;
        int population;
    publice
        void setName(string a){name = a;}
        void setPopulation(int a){population = a;}
        string toString(){
            return "Name:" + name + "Population:" + to_string(population);
        }
}

int main() {
    Monster m1; //Instance Object
    char cmd; //command character A, B, C, or Q
    string input; // user input for setter functions
while (true) {
    cout << "Choose Menu. A:Set Name, B:Set Level, C:Set Health, Q:Quit" << endl;
    cin >> cmd;
    if (cmd == 'A') {
        cout << "Give the type of Monster to make." << endl;
        cin >> input;
        m1.setName(input);
        cout << m1.toString() << endl;
    } else if (cmd == 'B') {
        cout << "Set the level of Monster." << endl;
        cin >> input;
        m1.setLevel(stoi(input));
        cout << m1.toString() << endl;
    } else if (cmd == 'C') {
        cout << "Set the health of Monster." << endl;
        cin >> input;
        m1.setHealth(stoi(input));
        cout << m1.toString() << endl;
    } else if (cmd == 'Q') break;
    else
        cout << "Invalid Input. Try Again." << endl;
    }
return 0;
}
