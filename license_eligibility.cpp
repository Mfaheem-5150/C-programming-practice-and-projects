#include <iostream>
using namespace std;
int main()
{
	int age;
	cout << "Enter age: ";
	cin >> age;
	if (age >= 18 && age < 70)
	{
		cout << "Eligible to Driving License.";
    }
	else
	{
		cout << "Not eligible for Driving License.";
    }
	return 0;
}