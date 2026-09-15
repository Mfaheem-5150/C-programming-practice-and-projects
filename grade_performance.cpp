#include <iostream>
using namespace std;

int main()
{
	int choice;
	cout << "1. Grade A" << endl;
	cout << "2. Grade B" << endl;
	cout << "3. Grade C" << endl;
	cout << "4. Grade D" << endl;
	cout << "5. Fail" << endl;
	cout << "Enter choice: ";
	cin >> choice;

	switch (choice)
	{
	case 1: 
		cout << "Excellent"; 
		break;
	case 2:
		cout << "Very Good";
		break;
	case 3:
		cout << "Good";
		break;
	case 4: 
		cout << "Pass";
		break;
	case 5: 
		cout << "Fail";
		break;
	default:
		cout << "Invalid choice";
	}

	return 0;
}