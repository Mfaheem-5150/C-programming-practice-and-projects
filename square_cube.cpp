#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Enter number: ";
	cin >> num;
	cout << "Square = " << num * num << endl;
	cout << "Cube = " << num * num * num;
	
	//second method 
	/*
	int sq = num * num;
	int cb = num * num * num;
	cout << "Square = " <<sq << endl;
	cout << "Cube = " << cb;
	*/
	return 0;
}