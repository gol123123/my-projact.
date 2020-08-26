#include <iostream>
#include <windows.h>
using namespace std;

class proisvedenie
{
        float num_1;
	    float num_2;
	public:
		void Setnum(float num_1, float num_2)
		{
			this->num_1 = num_1;
			this->num_2 = num_2;	
		}
		float res()
		{
			
			return num_1*num_2;
		}
};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	float a,b,c,k;
	cout << "вычисление происходит по формуле s=a*b+c*k+a*" << endl;
	cout << "введите числа" << endl;
	cin >> a >> b >> c >> k;
	proisvedenie A, B, C, S;
	A.Setnum(a,b);
	B.Setnum(c,k);
	C.Setnum(a,c);
	A.res();
	B.res();
	C.res();
	float prs = A.res() + B.res() + C.res();
	cout << "результат: " << prs;
};
