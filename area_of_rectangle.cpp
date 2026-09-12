#include <iostream>
using namespace std;
int main()
{
	double length, width, area;
	cout << "Enter length of rectangle: ";
	cin >> length;
	cout << "Enter width of rectangle: ";
	cin >> width;
	area = length * width;
	cout << "Area of Rectangle = " << area << endl;
	return 0;
}