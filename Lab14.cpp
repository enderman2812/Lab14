#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	setlocale(0, "RUS");
	ofstream fout;
	fout.open("string.txt");
	if(!fout.is_open())
	{
		cout << "������ �������� �����!" << endl;
	}
	else
	{
		fout << "������, ���!";
	}

	char c;
	ifstream fin;
	while ((c = fin.get()) != EOF)
		if(c == ',' || c == '!' || c == ' ')
		{
			c = ' ';
			cout << fout << endl;
		}
	
		fin.close();
	system("PAUSE");
}