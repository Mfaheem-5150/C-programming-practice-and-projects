#include <iostream>
using namespace std;

int main()
{
	int units;
	double bill_amount;
	cout << "Enter units: ";
	cin >> units;
	if (units <= 100)
	{
		bill_amount = units * 10;
	}
	else if (units <= 200)
	{
		bill_amount = units * 15;
	}
	else
	{
		bill_amount = units * 20;
	}

	cout << "Bill = " << bill_amount << endl;
	return 0;
}