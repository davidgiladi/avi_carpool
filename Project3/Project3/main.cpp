#include <iostream>
#include "Rational.h"
using namespace std;
void print_small(Rational* c, int size);
void print_big(Rational* c, int size);
int main()
{

	Rational c1(15,16),c2 ,c3(4,1),c4(23,25),c5(-1,5);
	Rational arr[5] = { c1 ,c2,c3,c4,c5 };

    print_small(arr, 5);
	print_big(arr, 5);
	
	return 2;
}
void print_small(Rational* c, int size)
{
	double small;
	small = c[0].get_number();
	for (int i = 1; i < size; i++)
	{
		if (small > c[i].get_number())
		{
			small = c[i].get_number();
	    }
	}
	cout << "the Smallest value  = " << small<<"\n";
}
void print_big(Rational* c, int size)
{
	double big;
	big = c[0].get_number();
	for (int i = 1; i < size; i++)
	{
		if (big < c[i].get_number())
		{
			big = c[i].get_number();
		}
	}
	cout << "the bigest value  = " << big;
}

