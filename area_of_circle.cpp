#include <iostream>
using namespace std;

int main()
{
	double radius, area;
	const double PI = 3.1416; // global variable
	cout << "Enter radius: ";
	cin >> radius;
	area = PI * radius * radius;
	cout << "Area of circle = " << area << endl;
	return 0;
}