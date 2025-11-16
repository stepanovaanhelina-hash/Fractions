#pragma once
class CastamFraction
{

	public :
		CastamFraction();
		CastamFraction(int numerator, int denomerator);
		void show();

		void setNumerator(int numerator);
		void setDenumerator(int denumerator);
		void setVelue(int numerator,int denumerator);
		int getNumerator();
		int getDenumerator();
		

		private:
			

			int _numerator = 1;
			int _denumerator = 1;

};

/*глоболние функции*/
CastamFraction operator*(CastamFraction a, CastamFraction b);
CastamFraction operator/(CastamFraction a, CastamFraction b);
CastamFraction operator+(CastamFraction a, CastamFraction b);
