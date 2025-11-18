#include "NumList.h"
#include <string>
// **** Utility Functions *********
// make your utility functions here. (not the Numlist's functions)
// void swap(int &a, int &b){}
// string printArray(int a[], int n){}
//*********************************
NumList::NumList() {
	nums[0] = 0;
	nums[1] = 0;
	nums[2] = 0;
	nums[3] = 0;
	nums[4] = 0;
}
NumList::NumList(int a = 0, int b = 0, int c = 0, int d = 0, int e = 0) { 
	nums[0] = a;
	nums[1] = b;
	nums[2] = c;
	nums[3] = d;
	nums[4] = e;
	history.push_back("[" + to_string(nums[0]) + ", " + to_string(nums[1]) + ", " + to_string(nums[2]) + ", " + to_string(nums[3]) + ", " + to_string(nums[4]) + "]: New");
}
string NumList::getHistory() {
	string out = "";
	for (string h : history) {
		out += h + "\n";
	}
	return out;
}
void NumList::change(int p1, int p2) {
	int temp;
	temp = nums[p1];
	nums[p1] = nums[p2];
	nums[p2] = temp;
	history.push_back("[" + to_string(nums[0]) + ", " + to_string(nums[1]) + ", " + to_string(nums[2]) + ", " + to_string(nums[3]) + ", " + to_string(nums[4]) + "]: Change " + to_string(nums[p1]) + " and " + to_string(nums[p2]));
}
void NumList::reverse() {
	int temp_1;
	temp_1 = nums[0];
	nums[0] = nums[4];
	nums[4] = temp_1;
	int temp;
	temp = nums[1];
	nums[1] = nums[3];
	nums[3] = temp;
	history.push_back("[" + to_string(nums[0]) + ", " + to_string(nums[1]) + ", " + to_string(nums[2]) + ", " + to_string(nums[3]) + ", " + to_string(nums[4]) + "]: Reverse");

}
void NumList::move() {
	int temp = nums[0];
	for (int i = 0; i < 4; i++) {
		nums[i] = nums[i + 1];
	}
	nums[4] = temp;
	history.push_back("[" + to_string(nums[0]) + ", " + to_string(nums[1]) + ", " + to_string(nums[2]) + ", " + to_string(nums[3]) + ", " + to_string(nums[4]) + "]: Move");
}
int NumList::search(int val) {
	for (int i = 0; i < 5; i++) {
		if (nums[i] == val) {
			return i;
		}
	}
	return -1;
}
void NumList::bubbleSort(bool debug) {
	if (debug) {
		for (int j = 4; j >= 0; j--) {
			int c = 0;
			for (int i = 0; i < j; i++) {
				if (nums[i] > nums[i + 1]) {
					int temp = nums[i];
					nums[i] = nums[i + 1];
					nums[i + 1] = temp;
					c++;
				}
			}
			if (c != 0) {
				cout << "---" << "[" + to_string(nums[0]) + ", " + to_string(nums[1]) + ", " + to_string(nums[2]) + ", " + to_string(nums[3]) + ", " + to_string(nums[4]) + "]" << endl;
			}
		}
		history.push_back("[" + to_string(nums[0]) + ", " + to_string(nums[1]) + ", " + to_string(nums[2]) + ", " + to_string(nums[3]) + ", " + to_string(nums[4]) + "]: Bubble Sort");
	}
	else {
		for (int j = 4; j >= 0; j--) {
			for (int i = 0; i < j; i++) {
				if (nums[i] > nums[i + 1]) {
					int temp = nums[i];
					nums[i] = nums[i + 1];
					nums[i + 1] = temp;
				}
			}
		}
		history.push_back("[" + to_string(nums[0]) + ", " + to_string(nums[1]) + ", " + to_string(nums[2]) + ", " + to_string(nums[3]) + ", " + to_string(nums[4]) + "]: Bubble Sort");
	}

}
void NumList::selectionSort(bool debug) {
	if (debug) {
		for (int i = 0; i < 4; i++) {
			int index = i;
			int temp = nums[i];
			int c = 0;
			for (int j = 4; j >= i; j--) {
				if (nums[j] < temp) {
					temp = nums[j];
					index = j;
					c++;
				}
			}
			int temp2 = nums[i];
			nums[i] = nums[index];
			nums[index] = temp2;
			cout << "---" << "[" + to_string(nums[0]) + ", " + to_string(nums[1]) + ", " + to_string(nums[2]) + ", " + to_string(nums[3]) + ", " + to_string(nums[4]) + "]" << endl;
		}
		history.push_back("[" + to_string(nums[0]) + ", " + to_string(nums[1]) + ", " + to_string(nums[2]) + ", " + to_string(nums[3]) + ", " + to_string(nums[4]) + "]: Selection Sort");
	}
	else {
		for (int i = 0; i < 5; i++) {
			int index = i;
			int temp = nums[i];
			for (int j = 4; j >= i; j--) {
				if (nums[j] < temp) {
					temp = nums[j];
					index = j;
				}
			}
			int temp2 = nums[i];
			nums[i] = nums[index];
			nums[index] = temp2;
		}
		history.push_back("[" + to_string(nums[0]) + ", " + to_string(nums[1]) + ", " + to_string(nums[2]) + ", " + to_string(nums[3]) + ", " + to_string(nums[4]) + "]: Selection Sort");
	}


}
