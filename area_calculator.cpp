#include <iostream>
using namespace std;

int main()
{
	int choice;
	double length, width, radius;
	cout << "1. Rectangle" << endl;
	cout << "2. Circle" << endl;
	cout << "3. Square" << endl;
	cout << "Enter choice: ";
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << "Enter length and width: ";
		cin >> length >> width;
		cout << "Area = " << length * width;
		break;
	case 2:
		cout << "Enter radius: ";
		cin >> radius;
		cout << "Area = " << 3.14 * radius * radius;
		break;

	case 3:
		cout << "Enter side: ";
		cin >> length;
		cout << "Area = " << length * length;
		break;
	default:
		cout << "Invalid choice";
	}
	return 0;
}