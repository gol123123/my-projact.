#include <iostream>
using namespace std;

class VECTOR
{
	int *a;
	int size; 
public:
void GetVECTOR(void)
{
	int size1;
	cout << "������� ���������� �����: \n";
	cin >> size1;
	size = size1;
    a = new int[size]; 
    cout << "��������� ������ \n";
	for (int i = 0; i < size; i++)
	{
		cout << "a[" << i << "]="; 
		cin >> a[i];
	}
}
void Max()
{
	int summa = 0;
		for (int i = 0; i<size; ++i)
		{
			if (a[i] > 0)
			{
				summa += a[i];
			}
		}
		cout << "����� ������������� �����" << endl;
		cout << summa << endl;
}
void delet()
{
	for(int i = 0; i < size; i++)
	{
		delete a;
	}
}
};

int main()
{
	setlocale(LC_ALL, "rus");
	VECTOR C;       
    C.GetVECTOR();
    C.Max();
    C.delet();
}
