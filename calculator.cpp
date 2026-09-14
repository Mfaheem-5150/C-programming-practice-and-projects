#include <iostream>
using namespace std;
int main()
{
	double a, b;
	char op;          // op stand for operation
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter operator (+ - * /): ";
	cin >> op;
	cout << "Enter second number: ";
	cin >> b;
	switch (op)
	{
	case '+':
		cout << a + b;
		break;

	case '-':
		cout << a - b;
		break;

	case '*':
		cout << a * b;
		break;

	case '/':
		cout << a / b;
		break;

	default:
		cout << "Invalid operator";
	}
	return 0;
}