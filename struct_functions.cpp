#include <iostream>
#include<string>
using namespace std;

struct student {
	int roll;
	char name[30];
	int marks;
};
void input(struct student &);
void display(struct student);
int main()
{
	student s; // { 10,"faheem",333 };
	input(s);
	display(s);
	return 0;
}
void input(student & s1)
{
	cout << "enter the roll of the student ";
	cin >> s1.roll;
	cout << "enter the name of student ";
	cin >> s1.name;
	cout << "enter the marks of student ";
	cin >> s1.marks;

}
void display(student s1)
{
	cout << "roll no=" << s1.roll << endl;
	cout << "name=" << s1.name << endl;
	cout << "marks=" << s1.marks << endl;

}