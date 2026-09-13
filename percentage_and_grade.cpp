#include <iostream>
using namespace std;
int main()
{
	double obt_marks, total_marks, percentage;

	cout << "Enter obtained marks: ";
	cin >> obt_marks;
	cout << "Enter total marks: ";
	cin >> total_marks;
	percentage = (obt_marks / total_marks) * 100;

	cout << "Percentage = " << percentage << "%" << endl;
	if (percentage >= 80)
	{
		cout << "Grade A";
	}
	else if (percentage >= 70)
	{
		cout << "Grade B";
	}
	else if (percentage >= 60)
	{
		cout << "Grade C";
	}
	else if (percentage >= 50)
	{
		cout << "Grade D";
	}
	else
		cout << "Fail";

	return 0;
}