#include<iostream>
using namespace std;

int main()
{
	int factorial, num, c;
	factorial = 1;
	c = 1;
	cout << "Enter the number to  calculate factorial : ";
	cin >> num;
	while (c <= num)
	{
		factorial = factorial * c;
		c = c + 1;
	}
	cout << "Factorial of "<< num <<" = " << factorial << endl;
	return 0;
}