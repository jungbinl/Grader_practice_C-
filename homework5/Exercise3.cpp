#include <iostream>
#include <cmath>
using namespace std;

class BankAccount {
private:
    int id;
    double amount;
    double rate;

public:
    void setID(int a) { id = a; }
    void setRate(double a) { rate = a; }
    void setAmount(double a) { amount = a; }

    double getAmount() { return amount; }
    double getRate() { return rate; }

    // 원래 amount를 바꾸지 않고 계산 결과만 반환
    double amountAfter10Years() const {
        return amount * pow(1 + rate, 10);
    }
};

int main() {
    BankAccount b1;
    char cmd;

    while (true) {
        cout << "Choose Menu. A:Set ID, B:Set Amount, C:Set Rate, Q:Quit" << endl;
        cin >> cmd;

        if (cmd == 'A') {
            int id;
            cout << "Set ID: ";
            cin >> id;
            b1.setID(id);
        } 
        else if (cmd == 'B') {
            double amt;
            cout << "Set the amount: ";
            cin >> amt;
            b1.setAmount(amt);
            cout << "Current: " << b1.getAmount()
                 << ", 10-Years: " << b1.amountAfter10Years() << endl;
        } 
        else if (cmd == 'C') {
            double r;
            cout << "Set the rate (ex: 0.05 for 5%): ";
            cin >> r;
            b1.setRate(r);
            cout << "Current: " << b1.getAmount()
                 << ", 10-Years: " << b1.amountAfter10Years() << endl;
        } 
        else if (cmd == 'Q') {
            cout << "Program terminated." << endl;
            break;
        } 
        else {
            cout << "Invalid Input. Try Again." << endl;
        }
    }

    return 0;
}
