#include <iostream>
using namespace std;

int main()
{
	int num1,num2 , temp; 
	cout << "Enter num1: ";
	cin >> num1;
	cout << "Enter num2: ";
	cin >> num2;
	cout << "Before swapping the variables." << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "After swapping the numbers.\n";
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	return 0;
}