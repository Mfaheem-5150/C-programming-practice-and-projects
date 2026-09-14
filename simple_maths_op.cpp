#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cout << "enter first number : ";
	cin >> x;
	cout << "enter second number : ";
	cin >> y;
	cout << "Sum = " << x + y << endl;
	cout << "Diff = " << x - y << endl;
	cout << "Product = " << x * y << endl;
	cout << " Interger Division result = " << x / y << endl;
	cout << "Real Division result = " << x / (y*1.0) << endl;
	cout << "Reminder = " << x % y << endl;
	return 0;
}