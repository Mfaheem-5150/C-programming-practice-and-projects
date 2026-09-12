#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	char ch;
	ofstream fout("student.txt");
	if (!fout)
	{
		cout << "file does not created";
		return 0;
	}

	fout << "this is the file pointer and the file handling programming topics ";

	fout.close();

	ifstream fin("student.txt");
	if (!fin)
	{
		cout << "file does not created in the program " << endl;
		return 0;
	}

	while (fin.get(ch))
	{
		cout << ch;
	}
	
	int start, end;

	fin.clear();

	fin.seekg(0, ios::beg);
	start = fin.tellg();
	cout << "the begning position of the pointer in bytes is " << start << endl;

	fin.seekg(0, ios::end);
	end = fin.tellg();
	cout << "the ending position of the file pointer in bytes is " << end << endl;

	cout << "the total no of the bytes that the file contain is equal to the " << (end - start) << endl;

	return 0;
}