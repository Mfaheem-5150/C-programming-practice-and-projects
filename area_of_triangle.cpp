#include <iostream>
using namespace std;

int main()
{
	double base, height, area;
	cout << "Enter base of triangle: ";
	cin >> base;
	cout << "Enter height of triangle: ";
	cin >> height;
	area = 0.5 * base * height;
	cout << "Area of Triangle = " << area << endl;

	return 0;
}