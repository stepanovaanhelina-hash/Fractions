

#include <iostream>
#include "CastamFraction.h"

int main()
{
	CastamFraction fr(4, 7);
	fr.show();
	CastamFraction fr2(8, 14);
	fr2.show();
	CastamFraction fr3;
	fr3 = fr / fr2;
	fr3.show();
	fr3 = fr * fr2;
	fr3.show();
	CastamFraction fr4;
	fr4 = fr + fr2;
	fr4.show();

}

