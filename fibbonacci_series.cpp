#include<iostream>
using namespace std;
int main()
{
	int fib1, fib2, fibn = 0, c = 1;
	cout << "fib1 = ";
	cin >> fib1;
	cout << "fib2 = ";
	cin >> fib2;
	cout << fib1 << "\t" << fib2 << "\t";
	while (c <= 10)
	{
		fibn = fib1 + fib2;
		cout << fibn << "\t";
		fib1 = fib2;
		fib2 = fibn;
		c = c + 1;
	}
	return 0;
}