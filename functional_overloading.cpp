#include <iostream>
#include<string>
using namespace std;
template<typename t>
void swapvalue(t &a, t &b)
{
	t temp;
	temp = a;
	a = b;
	b = temp;
}
template<typename T>
T max(T a, T b)
{
	return(a > b) ? a : b;
}
template <typename s>
s add(s a, s b) {
	return a + b;
}
template<typename u>
void displayarr(u arr[], int size)
{
	for (int  i = 0; i < size; i++)
	{
		cout << "arr[" << i << "]:" << arr[i] << endl;

	}
}

int main()
{
	int x = 6, y = 10;
	double c = 2.2, d = 7.0;
	cout << "before swaping the values \n";
	cout << "x=" << x << "y=" << y << endl;
	swapvalue(x, y);
	cout << "after swaping the values \n";
	cout << "x=" << x << "y=" << y << endl;
	cout << "before swaping the values \n";
	cout << "c=" << c << "d=" << d << endl;
	swapvalue(c, d);
	cout << "after swaping the values \n";
	cout << "c=" << c << "d=" << d << endl;
	cout << "max=" << max<int>(7, 4) << endl;
	cout << "max=" << max<double>(55.1, 55.4) << endl;
	cout << "add=" << add<int>(7, 4) << endl;
	cout << "add=" << add<double>(55.1, 55.4) << endl;

	const int s = 5;
	int arr[s] = { 1,3,4,5,6 };
	double darr[s] = { 1.11,1.33,1.22,1.44,1.55 };
	char carr[s] = { 'a','b','c','d','f' };
	displayarr(arr, s);
	displayarr(darr, s);
	displayarr(carr, s);
	return 0;
}
