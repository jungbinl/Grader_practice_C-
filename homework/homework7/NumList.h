#ifndef NUMLIST_H
#define NUMLIST_H
#include <iostream>
#include <vector>
using namespace std;
class NumList
{
private:
	int nums[5];
	vector<string> history;
public:
	NumList();
	NumList(int, int, int, int, int);
	string getHistory();
	void change(int, int);
	void reverse();
	void move();
	int search(int);
	void bubbleSort(bool);
	void selectionSort(bool);
};
#endif
