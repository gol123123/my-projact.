
#include <Windows.h>
#include <iostream>
#include <cstdlib>

template <class T>
T achtung(T n, T m)
{
	return ((n<m)?(m):(n));
}

template <class T1>
T1 achtung(T1 n)
{
	return (n*n);
}

template <class T2>
T2 sr_arif(T2 n, T2 m)
{
	return ((n+m)/2);
}

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int b;
	int c = 5;
	std::cin >> b;
	std::cout << b << std::endl; // выведется 9
    std::cout << achtung(b, c) << std::endl; 
    std::cout << achtung(b) << std::endl;
    std::cout << sr_arif(b, c) << std::endl;
	return 0;
}
