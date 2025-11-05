

#include <iostream>
#include "CastamFraction.h"

int main()
{
	CastamFraction fr(3, 4);
	fr.show();
	CastamFraction fr2(8, 1);
	fr2.show();
	CastamFraction fr3=fr*fr2;
	fr3.show();
}

