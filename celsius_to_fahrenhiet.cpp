#include <iostream>
using namespace std;
int main()
{
	double celsius, fahrenheit;
	cout << "Enter temperature in  celsius: ";
	cin >> celsius;
	fahrenheit = (celsius * 9 / 5) + 32;
	cout << "Fahrenheit temperature = " << fahrenheit << endl;
	return 0;
}