#include <iostream>
using namespace std;

int main()
{
	int choice;
	double num1, num2;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
	cout << "Enter choice: ";
	cin >> choice;
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;

	switch (choice)
	{
	case 1:
		cout << num1 + num2;
		break;
	case 2:
		cout << num1 - num2;
		break;
	case 3:
		cout << num1 * num2;
		break;
	case 4:
		cout << num1 / num2;
		break;
	default:
		cout << "Invalid choice";
	}

	return 0;
}