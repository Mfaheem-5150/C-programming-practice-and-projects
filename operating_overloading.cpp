#include <iostream>
#include<string>
using namespace std;
class marks {
private:
	int num;
public:
	marks(int n)
	{
		num = n;
	}
	marks()
	{
		num = 0;
	}
	marks operator ++()
	{
		return ++num;
	}
	marks operator --()
	{
		return --num;
	}
	void operator ++(int)
	{
		num = num + 1;
	}
	void display()
	{
		cout << "num= " << num << endl;
	}
};
int main()
{
	marks m(10);
	++m;
	m.display();
	marks m1(31);
	--m1;
	m1.display();
	m++;
	m.display();
	return 0;
}