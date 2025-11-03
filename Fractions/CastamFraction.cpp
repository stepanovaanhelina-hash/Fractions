#include "CastamFraction.h"
#include <iostream>

using namespace std;

CastamFraction::CastamFraction(int numerator, int denominator) {

	_numerator = numerator; 
	_denumerator = denominator;
	 
} 
void CastamFraction::show() {
	cout << this->_numerator << "/" << _denumerator << endl;

}
