#include <iostream>
#include <windows.h>
using namespace std;

int qud(int, int);
float qud(float, float);
double qud(double, double);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "в каком типе данных хотите получить средеарифметическое" << endl
	     << "введите 1, если int " << endl
	     << "введите 2, если float " << endl
	     << "введите 3, если double " << endl;
    int i;
    cin >> i;
	switch (i)
	{
		case 1: 	
    { 
    int a,b;
	cin >> a >> b;
	cout << qud(a,b);
    break;
    }
    case 2:
   	{
   	float a,b;
	cin >> a >> b;
	cout << qud(a,b);
    break;
    }
    case 3: 
    {
    double a,b;
	cin >> a >> b;
	cout << qud(a,b);
    break;
    }
	}
};

int qud(int a, int b)
{
	return (a+b)/2;
}
float qud(float a, float b)
{
	return (a+b)/2;
}

double qud(double a, double b)
{ 
	return (a+b)/2;
}
