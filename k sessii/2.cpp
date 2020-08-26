#include <iostream>
#include <windows.h>
using namespace std;

class proisvedenie
{
        float num_1;
	    float num_2;
	public:
		void Setnum(float Num_1, float Num_2)
		{
			num_1 = Num_1;
			num_2 = Num_2;	
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
