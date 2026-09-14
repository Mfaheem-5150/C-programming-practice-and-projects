#include <iostream>
using namespace std;
int main()
{
	double income, tax;
	cout << "Enter your income: ";
	cin >> income;
	if (income <= 25000)
	{
		tax = 0;
	}
	else if (income <= 50000)
	{
		tax = income * 0.05;
	}
	else
	{
		tax = income * 0.10;
	}

	cout << "Tax = " << tax;
	return 0;
}