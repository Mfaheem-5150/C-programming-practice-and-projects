#include <iostream>
using namespace std;
int main()
{
	int num, org_num, reverse = 0;
	cout << "Enter a number: ";
	cin >> num;
	org_num = num;
	while (num != 0)
	{
		reverse = reverse * 10 + num % 10;
		num = num / 10;
	}
	if (org_num == reverse)
		cout << "Palindrome";
	else
		cout << "Not Palindrome";

	return 0;
}