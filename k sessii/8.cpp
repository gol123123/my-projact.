#include <iostream>
#include <windows.h>
using namespace std;

int qudrat(int);
float qudrat(float);
double qudrat(double);


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "� ����� ���� ������ ������ �������� � �������" << endl
	     << "������� 1, ���� int " << endl
	     << "������� 2, ���� float " << endl
	     << "������� 3, ���� double " << endl;
    int i;
    cin >> i;
	switch (i)
	{
		case 1: 	
    { 
    int a;
	cin >> a; 
	cout << qudrat(a);
    break;
    }
    case 2:
   	{
  	float b;
	cin >> b;
	cout << qudrat(b);
    break;
    }
    case 3: 
    {
    double c;
	cin >> c;
	cout << qudrat(c);
    break;
    }
	}
};

int qudrat(int a)
{
	return a*a;
}
float qudrat(float a)
{
	return a*a;
}

double qudrat(double a)
{
	return a*a;
}
