#include <iostream>
#include "NumList.h"
void printMenu() {
	cout << "\nCommand Options\n"
		<< "-----------------------------------\n"
		<< "A: create a new list\n"
		<< "B: change the elements\n"
		<< "C: reverse the elements\n"
		<< "D: move the elements\n"
		<< "E: search e value\n"
		<< "F: bubble sort\n"
		<< "G: selection sort\n"
		<< "H: bubble sort(Debug Mode)\n"
		<< "I: selection sort(Debug Mode)\n"
		<< "?: display the menu\n"
		<< "Q: quit this program\n" << endl;
} // end of the printMenu method
int main() {
	char command;
	int num1, num2, num3, num4, num5;
	cout << "*** Start of Program ***\n" << endl;
	NumList myList;
	do
	{
		// ask a user to choose a command
		cout << "[Please enter a command or ?] " << endl;
		cin >> command;
		command = toupper(command);
		cin.ignore(20, '\n');
		switch (command) {
		case 'A':
			cout << "A [New]: Type 5 Integers " << endl;
			cin >> num1 >> num2 >> num3 >> num4 >> num5;
			myList = NumList(num1, num2, num3, num4, num5);
			cout << myList.getHistory();
			break;
		case 'B':
			cout << "B [Change]: Type 2 Positions to swap " << endl;
			int pos1, pos2;
			cin >> pos1 >> pos2;
			myList.change(pos1, pos2);
			cout << myList.getHistory();
			break;
		case 'C':
			cout << "C [Reverse]:" << endl;
			myList.reverse();
			cout << myList.getHistory();
			break;
		case 'D':
			cout << "D [Move]: " << endl;
			myList.move();
			cout << myList.getHistory();
			break;
		case 'E':
			cout << "E [Search]: Type a value to search " << endl;
			int n,a;
			cin >> n;
			a = myList.search(n);
			if (a == -1) {
				cout << n << " is not found" << endl;
			}
			else {
				cout << n << " is " << a + 1 << "nd item" << endl;
			}
			break;
		case 'F':
				cout << "F [Bubble Sort]: " << endl;
				myList.bubbleSort(false);
				cout << myList.getHistory();
			break;
		case 'G':
			cout << "G [Selection Sort]: " << endl;
			myList.selectionSort(false);
			cout << myList.getHistory();
			break;
		case 'H':
			cout << "H [Bubble Sort (Debug)]: " << endl;
			myList.bubbleSort(true);
			cout << myList.getHistory();
			break;
		case 'I':
			cout << "I [Selection Sort (Debug)]: " << endl;
			myList.selectionSort(true);
			cout << myList.getHistory();
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
	cout << "*** End of Program ***" << endl;
	return 0;
}
