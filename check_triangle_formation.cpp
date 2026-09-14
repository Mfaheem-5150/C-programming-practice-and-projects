#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter three sides: ";       ////first way to input
	cin >> a >> b >> c;
	/*
	cout << "a : ";   // second way to input 
	cin >> a;
	cout << "b : ";
	cin >> b;
	cout << "c : ";
	cin >> c;
	*/
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "Triangle can be formed";
	}
	else
	{
		cout << "Triangle cannot be formed";
	}

	return 0;
}