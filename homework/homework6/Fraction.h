#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
using namespace std;
class Fraction
{
private:
	int numerator;
	int denominator;
	int greatestCommonDivisor(int, int);
	void simplify();
public:
	Fraction(int, int);
	string toString();
	void add(Fraction);
	void subtract(Fraction);
	void multiply(Fraction);
	void divide(Fraction);
};
#endif
