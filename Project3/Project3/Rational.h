
class Rational {
	int numerator;
	int denominator;
public:
	void set_numerator(int num);
	void set_denominator(int num);
	int get_numerator();
	int get_denominator();
	Rational();
	Rational(int num1, int num2);
	void reduction();
	void print_Rational();
	double get_number();
};