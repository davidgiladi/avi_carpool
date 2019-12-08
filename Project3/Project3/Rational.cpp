
#include <iostream>
using namespace std;
#include <cstdlib>

#include "Rational.h"



void Rational::set_numerator(int num) {

	numerator = num;
}
void Rational::set_denominator(int num) {

	denominator = num;
}
int  Rational::get_numerator()
{
	return numerator;
}
int  Rational::get_denominator()
{
	return denominator;
}
Rational::Rational()
{
	numerator = 0;
	denominator = 1;

}
Rational::Rational(int num1, int num2)
{
	if ((num2 == 0) or (abs(num1) >abs(num2)))
	{
		numerator = 0;
		denominator = 1;
	}
	else {
		numerator = num1;
		denominator = num2;
	}
}
void Rational::reduction()
{


	for (int i = numerator; i > 0; i--)
	{
		if ((numerator % i == 0) && (denominator % i== 0))
		{
			numerator = numerator / i;
			denominator = denominator / i;
		}

	}
}
void Rational::print_Rational()
{
	int  num1 = numerator;
	int num2 = denominator;
	Rational temp(num1, num2);
	temp.reduction();
	cout << temp.get_numerator() << "/" << temp.get_denominator() << "\n" ;

}
double Rational::get_number()
{
	return double(numerator) / double(denominator);
}
