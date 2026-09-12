#include<iostream>
using namespace std;
int main()
{
	int num, c, sum = 0, rem;
	cout << "enter a number ";
	cin >> num;
	c = num;
	while (num != 0)
	{
		rem = num % 10;
		sum = (sum * 10) + rem;
		num = num / 10;
	}
	if (sum == c)
	{
		cout << "palindrome";
	}
	else
		cout << "not palindrome";
	return 0;
}