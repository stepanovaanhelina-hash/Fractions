#include "CastamFraction.h"
#include <iostream>

using namespace std;
CastamFraction::CastamFraction() {
	setVelue(1, 1);
}
CastamFraction::CastamFraction(int numerator, int denumenator) {

	setVelue(numerator  , denumenator);
	 
} 
void CastamFraction::show() {
	cout << this->_numerator << "/" << _denumerator << endl;

}
void CastamFraction::setNumerator(int numerator) 
{
	if (numerator == 0) {
		numerator = 1;
		cout << "Numerator cannot be equal to zero!" << endl;
	}
	_numerator = numerator;
}

int CastamFraction::getNumerator() {
	return _numerator;
}
void CastamFraction::setDenumerator(int denumerator) 
{
	if (denumerator == 0) {
		denumerator = 1;
		cout << "Denumerator cannot be equal to zero!" << endl;
	}
	_denumerator = denumerator;
}
int CastamFraction::getDenumerator() {
	return _denumerator;
}

void CastamFraction::setVelue(int numerator, int denumerator) 
{
	setDenumerator(denumerator);
	setNumerator(numerator);

}

CastamFraction operator*(CastamFraction left ,CastamFraction right) {
	CastamFraction result;
	result.setNumerator(left.getNumerator() * right.getNumerator());
	result.setDenumerator(left.getDenumerator() * right.getDenumerator());
	return result;

}
CastamFraction operator/(CastamFraction left, CastamFraction right)
{
	CastamFraction result;

	if (right.getNumerator() == 0) {
		cout << "Error: division by zero!" << endl;
		return result; 
	}

	result.setNumerator(
		left.getNumerator() * right.getDenumerator()
	);
	result.setDenumerator(
		left.getDenumerator() * right.getNumerator()
	);
	return result;
}

//???????? ??????? ???????? ?????? ???????????
int lowerdenumerator(int a, int b) 
    { 
	while (b != 0) 
	{
		int temp = b;
		b = a % b;
		a = temp;
	}

	 return a;
   }
int find_lcm (int a, int b) {
	return (a * b) / lowerdenumerator(a, b);
	}
CastamFraction operator+(CastamFraction left, CastamFraction right) {
	CastamFraction result;
	result.setNumerator(left.getNumerator() + right.getNumerator());

	int lcm = find_lcm(left.getDenumerator(), right.getDenumerator());

	result.setDenumerator(lcm);
	return result;
}