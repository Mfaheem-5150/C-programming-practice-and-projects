#include <iostream>
using namespace std;
int main()
{
	int choice;
	double balance = 50000;
	double amount;
	cout << "1. Check Balance" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw" << endl;
	cout << "Enter choice: ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "Balance = " << balance;
		break;

	case 2:
		cout << "Enter amount: ";
		cin >> amount;
		balance = balance + amount;
		cout << "New Balance = " << balance;
		break;

	case 3:
		cout << "Enter amount: ";
		cin >> amount;

		if (amount <= balance)
		{
			balance = balance - amount;
			cout << "New Balance = " << balance;
		}
		else
			cout << "Insufficient balance";

		break;

	default:
		cout << "Invalid choice";
	}
	return 0;
}