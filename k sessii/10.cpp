#include <iostream>
#include <string>
using namespace std;

class Str
{
	string stroka;
public:
	void get(string str)
	{
		stroka = str;
	}
	void proverka()
	{
		int l = 0;
		for (int i = 0; i < stroka.length()-1; i++)
		{
			if (stroka[i] == stroka[i+1])
			{	
				l++;
			}
		}
		if (l > 0)
		{
			cout <<"� ������������������ ���� ���� ������������� ���������� ��������" << endl;
		}
		else
		{
			cout <<"� ������������������ ��� ���� ������������� ���������� ��������" << endl;
		}
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	string STR;
	cout <<"������� ������" << endl;
	cin >> STR;
	Str A;
	A.get(STR);
	A.proverka();
}
