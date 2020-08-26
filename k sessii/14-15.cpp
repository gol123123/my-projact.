#include <iostream>
#include <process.h>
const int num = 3;
using namespace std;
//////////////////////////////////////////////////////
class VECTOR
{
	int i;
	int numvector[num];
    int *vector;
public:
	VECTOR() {i = 0;}
	VECTOR(int i) 
	{
		this->i = i;
		vector = new int[i];
		cout << "вызвался консруктор"<< this << endl;	
	}
	void scanf()
	{
		cout << "заполните вектор" << endl;
		for (int k = 0; k < i; k++)
		{
			cout <<"["<< k+1 <<"]" << "элемент вектора: ";
		    cin >> vector[k];
		}
	}
	
	VECTOR(VECTOR& Vector)
	{
		this->i = Vector.i;
		this->vector = new int[Vector.i];
		for(int k = 0; k < Vector.i; k++)
		{
			this->vector[k] = Vector.vector[k];
		}
		cout << "вызвался консруктор"<< this << endl;
	}

	~VECTOR()
	{
		cout << "вызвался десруктор"<< this << endl;
		delete[] vector; 
	}
	
	void print()
	{
		cout << "вызвался принт"<< this << endl;
		for(int k = 0; k < i; k++)
		{
			cout <<"["<< k+1 <<"]" << "элемент вектора: ";
			cout << vector[k] << endl;
		}	
	}
	
	VECTOR& operator=(const VECTOR &Vector)
	{
		
		if(this->i > 0)
		{
			delete[] vector;
		}
		this->i = Vector.i;
		this->vector = new int[Vector.i];
		for(int k = 0; k < Vector.i; k++)
		{
			this->vector[k] = Vector.vector[k];
		}	
		return *this;
	}
	
	VECTOR& operator+(VECTOR &Vector)
	{	
		for(int k = 0; k < Vector.i; k++)
		{
			vector[k] = vector[k] + Vector.vector[k];
		}
		return *this;
	}	
	
	int& operator[](int n)
	{
		if (n < 0 || n >= num)
		{
			cout << "\n ошиочный индекс" << endl;
			exit(1);
		}
		else
		{return vector[n];}
		
	}
	
	bool operator==(const VECTOR &Vector)
	{
		for (int k = 0; k < this->i; k++)
		{
			if (this->vector[k] == Vector.vector[k])
		    {
		    	return true;
	     	}
     		else
    		{
    			return false;
    		}
		}		
	}
	
};



int main()
{
	setlocale(LC_ALL, "rus");
	int a;
	cout << "введите размер вектора"<< endl;
	cin >> a;
	VECTOR vector1(a);
	VECTOR vector2;
	VECTOR vector3;
	VECTOR vector4;
	
	vector1.scanf();
	//VECTOR vector2(vector1);
	
	vector2 = vector1;
	vector4 = vector1;
	vector1.print();
	vector2.print();	
	
	for( int j = 0; j < num; j++)
	{ cout << "элемент " << j+1 << " равен " << vector4[j]  << endl;}
	
	vector3 = vector1 + vector2;
	vector3.print();
	
	bool result1 = vector3 == vector1;
	bool result2 = vector2 == vector1;
	
	cout << result1 << "   " << result2 << endl;
	return 0;
}
