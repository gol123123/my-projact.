#include <iostream>

class Summa
{
	    float num_1;
	    float num_2;
	public:
		void Setnum(float Num_1, float Num_2)
		{
			num_1 = Num_1;
			num_2 = Num_2;	
		}
		float summa()
		{
			return num_1+num_2;
		}
};

int main()
{
	setlocale(LC_ALL, "rus");
	float a,b;
	std::cout << "введите 2 вещественных числа" << std::endl;
	std::cin >> a >> b;
	Summa A;
	A.Setnum(a,b);
	std::cout << "сумма чисел: " << A.summa();
}
