#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter number: ";
	cin >> num;
	if (num > 0)
		cout << "Number is Positive."<<endl;
	else if (num < 0)
		cout << "Number is Negative.";
	else
		cout << "Zero";

	return 0;

}