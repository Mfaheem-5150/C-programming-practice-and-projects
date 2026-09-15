#include <iostream>
using namespace std;
int main()
{
	int choice;
	double value;
	cout << "1. Kilometer to Meter" << endl;
	cout << "2. Meter to Kilometer" << endl;
	cout << "3. Hours to Minutes" << endl;
	cout << "4. Minutes to Seconds" << endl;
	cout << "Enter choice: ";
	cin >> choice;
	cout << "Enter value: ";
	cin >> value;
	switch (choice)
	{
	case 1:
		cout << value * 1000;
		break;

	case 2:
		cout << value / 1000;
		break;

	case 3:
		cout << value * 60;
		break;

	case 4:
		cout << value * 60;
		break;

	default:
		cout << "Invalid choice";
	}

	return 0;
}