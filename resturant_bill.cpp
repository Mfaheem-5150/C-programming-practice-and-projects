#include <iostream>
using namespace std;

int main()
{
	int choice, quantity;
	double bill = 0.0;
	cout << "1. Burger - Rs. 300" << endl;
	cout << "2. Pizza - Rs. 1000" << endl;
	cout << "3. Fries - Rs. 200" << endl;
	cout << "4. Shake - Rs. 250" << endl;
	cout << "Enter choice: ";
	cin >> choice;
	cout << "Enter quantity: ";
	cin >> quantity;
	switch (choice)
	{
	case 1:
		bill = 300 * quantity;
		break;
	case 2:
		bill = 1000 * quantity;
		break;

	case 3:
		bill = 200 * quantity;
		break;
	case 4:
		bill = 250 * quantity;
		break;
	default:
		cout << "Invalid choice";
		return 0;   
		/*reason behind this return is that 
		when user enter invalid choice then 
		no bill display to customer*/
	}
	cout << "Total Bill = Rs. " << bill;
	return 0;
}