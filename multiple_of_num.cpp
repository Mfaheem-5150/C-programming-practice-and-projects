#include <iostream>
using namespace std;

int main()
{
	int num, mul;
	cout << "Enter a number: ";
	cin >> num;
	cout << "enter divisor ";
	cin >> mul;
	if (num % mul == 0) 
	{
		cout << "number is multiple of  " << mul << endl;
	}
	else
	{
		cout << "number is not muliple of  " << mul << endl;
	}
	return 0;
}