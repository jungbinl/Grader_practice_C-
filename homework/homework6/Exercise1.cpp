//***********************************************************
// Name: jungbin lee
// Title: Exercise.cpp
// Description: Define a class Fraction that calculates the math operations as a fraction, and develop a program to test the class.A Fraction is an object with two integers, numerator and denominator.A new Fraction object starts as 0 (0 / 1).The test program asks to choose the operation(+, -, *, or /) and type two integers as one single line.Then, the Fraction shows the operation and result
// Date: 10/25/2024
//***********************************************************

#include "Fraction.h"
#include <iostream>
#include <string>

using namespace std;
void printMenu() {
	cout << "Command Options\n"
		<< "-----------------------------------\n"
		<< "c: reset the value\n"
		<< "+: add a fraction to the current value\n"
		<< "-: subtract a fraction from the current value\n"
		<< "*: multiply a fraction to the current value\n"
		<< "/: divide the current value by a fraction\n"
		<< "?: display the menu again\n"
		<< "q: quit this program" << endl;
} // end of the printMenu method
int main() {
	char command; // menu-command
	int num1, num2; // numbers used for input in the various cases
	cout << "*** Start of Program ***" << endl;

	Fraction fractionA(0, 1);
	Fraction fractionB(0, 1);

	do
	{
		// ask a user to choose a command
		cout << "\n[Please enter a command] " << endl;
		cin >> command;
		command = toupper(command);
		cin.ignore(20, '\n');
		switch (command) {
		case 'C':
			cout << "[Fraction is reset as 0] " << endl;
			fractionA = Fraction(0, 1);
			fractionB = Fraction(0, 1);
			cout << fractionA.toString() << endl;

			break;
		case '*':
			cout << "[Enter two numbers for a fraction to MULTIPLY] " << endl;
			cin >> num1;
			cin >> num2;
			fractionB = fractionA;
			fractionA = Fraction(num1, num2);
			cout << fractionB.toString() + " * " << num1 << "/" << num2 << " = ";
			fractionA.multiply(fractionB);
			cout << fractionA.toString() << endl;
			break;
		case '/':
			cout << "[Enter two numbers for a fraction to DIVIDE] " << endl;
			cin >> num1;
			cin >> num2;
			fractionB = fractionA;
			fractionA = Fraction(num1, num2);
			cout << fractionB.toString() + " / " << num1 << "/" << num2 << " = ";
			fractionA.divide(fractionB);
			cout << fractionA.toString() << endl;
			break;
		case '+':
			cout << "[Enter two numbers for a fraction to ADD] " << endl;
			cin >> num1;
			cin >> num2;
			fractionB = fractionA;
			fractionA = Fraction(num1, num2);
			cout << fractionB.toString() + " + " << num1 << "/" << num2 << " = ";
			fractionA.add(fractionB);
			cout << fractionA.toString() << endl;
			break;
		case '-':
			cout << "[Enter two numbers for a fraction to SUBTRACT] " << endl;
			cin >> num1;
			cin >> num2;
			fractionB = fractionA;
			fractionA = Fraction(num1, num2);
			cout << fractionB.toString() + " - " << num1 << "/" << num2 << " = ";
			fractionA.subtract(fractionB);
			cout << fractionA.toString() << endl;
			break;
		case '?':
			printMenu();
			break;
		case 'Q':
			break;
		default:
			cout << "[Invalid input] " << endl;
			break;
		}
	} while (command != 'Q');
	cout << "\n ****** End of Program ******" << endl;
	return 0;
}
