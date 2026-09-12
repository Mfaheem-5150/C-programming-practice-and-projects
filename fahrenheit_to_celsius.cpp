#include <iostream>
using namespace std;
int main()
{
	double celsius, fahrenheit;
	cout << "Enter temperature in  fahrenheit: ";
	cin >> fahrenheit;
	celsius = (fahrenheit - 32) * 5 / 9;
	cout << "Celsius temperature = " << celsius << endl;
	return 0;
}