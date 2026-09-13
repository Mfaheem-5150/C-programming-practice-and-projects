#include<iostream>
using namespace std;

int main()
{
	double temp;
	cout << "Enter temperature: ";
	cin >> temp;
	if (temp >= 35)
	{
		cout << "It is Hot";
	}
	else if (temp >= 20)
	{
		cout << "It is Normal";
	}
	else
	{
		cout << "It is Cold";
    }

	return 0;
}