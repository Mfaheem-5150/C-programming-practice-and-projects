#include <iostream>
using namespace std;

int main()
{
	const int s = 5;
	int arr[s];
	int temp;

	for (int i = 0; i < s; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

	// Reverse an array
	for (int i = 0; i < s / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[s - i - 1];
		arr[s - i - 1] = temp;
	}

	cout << "Displayed the reversed array:" << endl;

	for (int i = 0; i < s; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}

	return 0;
}