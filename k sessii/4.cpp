#include <iostream>
using namespace std;

class VECTOR
{
	float *a;
	int size; 
public:
void GetVECTOR(void)
{
	int size1;
	cout << "������� ���������� �����: \n";
	cin >> size1;
	size = size1;
    a = new float[size]; 
    cout << "��������� ������ \n";
	for (int i = 0; i < size; i++)
	{
		cout << "a[" << i << "]="; 
		cin >> a[i];
	}
}
void Max()
{
	float max = a[0];
		for (int i = 0; i<size; ++i)
		{
			if (a[i] > max)
			{
				max = a[i];
			}
		}
		cout << "������������ �����" << endl;
		cout << max << endl;
}
};

int main()
{
	setlocale(LC_ALL, "rus");
	VECTOR C;       
    C.GetVECTOR();
    C.Max();
}
