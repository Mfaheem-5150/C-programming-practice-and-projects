#include <iostream>
using namespace std;
int main()
{
	int count = 1;
	int num;
	cout << "Enter a number to print multiplication table : ";
	cin >> num;
	while (count <= 10)
	{
		cout << num << "*" << count << "=" << num * count << endl;
		count++;
	}
	// using for loop 
	int num2;
	cout << "Enter a number to print multiplication table : ";
	cin >> num2;
	for (int count = 1; count <= 10; count += 1)
	{
		cout << num2 << "*" << count << "=" << num2 * count << endl;
	}
	return 0;
}