#include <iostream>
using namespace std;

int main()
{
	double salary, bonus, total;
	cout << "Enter salary: ";
	cin >> salary;
	if (salary >= 50000)
	{
		bonus = salary * 0.10;
	}
	else
	{
		bonus = salary * 0.05;
	}

	total = salary + bonus;
	cout << "Bonus = " << bonus << endl;
	cout << "Total Salary = " << total;
	return 0;
}