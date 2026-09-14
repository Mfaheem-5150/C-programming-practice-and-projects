#include <iostream>
using namespace std;

int main()
{
	int month;
	cout << "Enter month number: ";
	cin >> month;
	switch (month)
	{
	case 1:
		cout << "January" << endl;
		cout << "31 days";
		break;
	case 2:
		cout << "February" << endl;
		cout << "28 or 29 days";
		break;
	case 3:
		cout << "March" << endl;
		cout << "31 days";
		break;
	case 4:
		cout << "April" << endl;
		cout << "30 days";
		break;
	case 5:
		cout << "May" << endl;
		cout << "31 days";
		break;
	case 6:
		cout << "June" << endl;
		cout << "30 days";
		break;
	case 7:
		cout << "July" << endl;
		cout << "31 days";
		break;
	case 8:
		cout << "August" << endl;
		cout << "31 days";
		break;
	case 9:
		cout << "September" << endl;
		cout << "30 days";
		break;
	case 10:
		cout << "October" << endl;
		cout << "31 days";
		break;
	case 11:
		cout << "November" << endl;
		cout << "30 days";
		break;
	case 12:
		cout << "December" << endl;
		cout << "31 days";
		break;
	default:
		cout << "Invalid month";
	}

	return 0;
}