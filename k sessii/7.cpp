#include <iostream>
using namespace std;

class matrix
{
	float *a[4]; 
public:
void Getmatrix(void)
{
    for (int i = 0; i < 4; i++)
    {
    	a[i] = new float[4];
        cout << "заполните "<< i+1 << " столбец массива" << endl;
    	for (int j = 0; j < 4; j++)
    	{
    		cout << "a[" << j << "]="; 
    		cin >> a[i][j];   	
		}
	}	
}
void Max()
{
	float srsum = 0;
		for (int i = 0; i<4; ++i)
		{
			for (int j = 0; j < 4; j++)
			{
				if ( i == j )
				{
					srsum +=a[i][j];
				}
			}
		}
		srsum /= 4;
		cout << "среднее значение главной диагонали" << endl;
		cout << srsum << endl;
}
void delet()
{
	for(int i = 0; i < 4; i++)
	{
		delete a[i];
	}
}
};

int main()
{
	setlocale(LC_ALL, "rus");
	matrix C;       
    C.Getmatrix();
    C.Max();
    C.delet();
}
