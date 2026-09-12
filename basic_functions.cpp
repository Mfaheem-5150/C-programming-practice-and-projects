#include<iostream>
using namespace std;
void getdata(int &,int &);
void printdata(int, int);
void sum(int, int);

int main()
{
	int x, y;
	getdata(x,y);
	printdata(x, y);
	sum(x, y);
	return 0;

}
void getdata(int & x, int & y)    //pass by reference 
{
	cout << "enter first number : ";
	cin >> x;
	cout << "enter second integer : ";
	cin >> y;

}
void printdata(int x, int y)
{
	cout << "First number x = " << x << endl;
	cout << "Second number y = " << y << endl;

}
void sum(int a, int b)
{
	int sum = a + b;
	cout << "sum of numbers = " << sum << endl;
}