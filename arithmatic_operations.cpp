#include <iostream>
using namespace std;

int main()
{
	int a, b, sub;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	sub = a - b;
	cout << "Difference = " << sub << endl;
	int mult;
	mult = a * b;
	cout << "product of numbers = " << mult << endl;
	
	double div;
	div = a / (b*1.0);    // to avoid interger division
	cout << "Division result = " << div << endl;
	return 0;
}