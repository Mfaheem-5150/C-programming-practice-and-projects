#include <iostream>
using namespace std;
int main()
{
	int choice;
	double amount;
	cout << "1. Dollar to Rupees" << endl;
	cout << "2. Rupees to Dollar" << endl;
	cout << "Enter choice: ";
	cin >> choice;
	cout << "Enter amount: ";
	cin >> amount;

	switch (choice)
	{
	case 1:
		cout << "Rupees = " << amount * 280;
		break;
	case 2:
		cout << "Dollars = " << amount / 280;
		break;
	default:
		cout << "Invalid choice";
	}
	return 0;
}