#include "Fraction.h"
int Fraction::greatestCommonDivisor(int a, int b) {
	int temp;
	while (a != 0 && b != 0) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	return a + b;
}
void Fraction::simplify() {
	if (denominator < 0) {
		denominator = -denominator;
		numerator = -numerator;
	}
	int gcd = greatestCommonDivisor(abs(numerator), abs(denominator));
	numerator /= gcd;
	denominator /= gcd;
}
Fraction::Fraction(int n, int d) {
	numerator = n;
	denominator = d;
	simplify();
}
string Fraction::toString() {
	if (numerator == 0) {
		return "0";
	}
	else if (denominator == 1) {
		return "1";
	}
	else {
		return to_string(numerator) + "/" + to_string(denominator);
	}
}

void Fraction::divide(Fraction b) {
	numerator = numerator * b.denominator;
	denominator = denominator * b.numerator;
	int a = 0;
	a = numerator;
	simplify();
	a = numerator;
	numerator = denominator;
	denominator = a;
}
void Fraction::multiply(Fraction b) {
	numerator = numerator * b.numerator;
	denominator = denominator * b.denominator;
	simplify();
}
void Fraction::add(Fraction b) {
	numerator = numerator * b.denominator + b.numerator * denominator;
	denominator *= b.denominator;
	simplify();
}
void Fraction::subtract(Fraction b) {
	numerator = -(numerator * b.denominator - b.numerator * denominator);
	denominator *= b.denominator;
	simplify();
}
