#include <iostream>
using namespace std;

int main()
{
	double km, meters;
	cout << "Enter distance in kilometers: ";
	cin >> km;
	meters = km * 1000;
	cout << "Distance in Meters = " << meters;
	// second way
//	cout << "Meter = " << km * 1000 << endl;
	return 0;
}