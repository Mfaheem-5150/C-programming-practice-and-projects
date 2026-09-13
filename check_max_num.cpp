#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	// second way to input both number in one statement
	/*
	cout << "Enter two numbers: ";
	cin >> num1 >> num2 ;
	*/
	if (num1 > num2)
		cout << num1 << " is greater.";
	else if (num2 > num1)
		cout << num2 << " is greater.";
	else
		cout << "Both numer are equal.";

	return 0;
}