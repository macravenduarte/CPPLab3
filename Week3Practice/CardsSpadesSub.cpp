#include <iostream>
using namespace std;

/* Subtraction Prototypes */
void SUB(int, int);
void SUB(double, int);
void SUB(double, double);
void SUB(int num1, int den1, int num2, int den2);

int main() {

	
	return 0;
}

//Initial number values
void SUB(int num1, int num2)
{
	cout << "The difference of " << num1 << "and " << num2 << "is " << num1 - num2;
}

//Overloaded function first Int with a Double
void SUB(double num1, int num2)
{
	cout << "The difference of " << num1 << "and " << num2 << "is " << num1 - num2;
}

//Overloaded function second Int with a Double
void SUB(double num1, double num2)
{
	cout << "The difference of " << num1 << "and " << num2 << "is " << num1 - num2;
}

//Overload function that takes two fractions of type int
void SUB(int num1, int den1, int num2, int den2)
{
	cout << "The first fraction of " << num1 << "and" << den1 << "is " << (num1 / den1);
	cout << "The second fraction of " << num2 << "and" << den2 << "is " << (num2 / den2);

	cout << "The difference between " << (num1 / den1) << "and " << (num2 / den2) << "is " << (num1 / den1) - (num2 / den2);
}