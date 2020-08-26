#include <iostream>
using namespace std;

class VECTOR
{
	int i,j;
    int *matrix[];
    int *vector;
    friend void peremnojenie(VECTOR &);
public:
	void inizalmatrix(int i, int j)
	{
		this->i = i;
		this->j = j;
			for (int l = 0; l < i; l++)
		{
			matrix[l] = new int[j];
		}
		vector = new int[i];
	}
	void inizalvector()
	{
		vector = new int[i];
	}
	void scanf()
	{
		cout << "заполните массив" << endl;
		for (int k = 0; k < i; k++)
		{
			for (int n = 0; n < j; n++)
			{
				cout <<"["<< k+1 <<"]" <<"["<< n+1 <<"]" << "элемент массива: " ;
			 	cin >> matrix[k][n];
			}
		}
		cout << "заполните вектор" << endl;
		for (int k = 0; k < i; k++)
		{
			cout <<"["<< k+1 <<"]" << "элемент вектора: ";
		    cin >> vector[k];
		}
	}

};

void peremnojenie(VECTOR &matvec)
{
	int stroka = 0;
    for (int k = 0; k < matvec.i; k++)
	{
		for (int n = 0; n < matvec.j; n++)	
		{
		 	matvec.matrix[k][n] *= matvec.vector[k];
		}
	}
	for (int k = 0; k < matvec.i; k++)
	{
		for (int n = 0; n < matvec.j-1; n++)	
		{
		 	matvec.matrix[k][stroka] += matvec.matrix[k][n+1];
		}
		stroka++;
	}
	for (int k = 0; k < matvec.i; k++)
	{
		for (int n = 0; n < stroka; n++)
		{
			cout << matvec.matrix[k][n] << endl;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	int a,b;
	VECTOR mat;
	cout << "введите размер массива"<< endl;
	cin >> a >> b;
	mat.inizalmatrix(a,b);
	mat.inizalvector();
	mat.scanf();
	peremnojenie(mat);
}
