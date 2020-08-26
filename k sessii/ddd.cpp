#include <iostream>
 
void add(int, int);
void subtract(int, int);
void multiply(int, int);
 
int main()
{
    int a = 10;
    int b = 5;
    void (*operations[3])(int, int) = {add, subtract, multiply};
      
    // ???????? ????? ???????
    int length = sizeof(operations)/sizeof(operations[0]);
      
    for(int i=0; i < length;i++)
    {
        operations[i](a, b);    // ????? ??????? ?? ?????????
    }
      
    return 0;
}
void add(int x, int y)
{
    std::cout << "x + y = " << x + y << std::endl;
}
void subtract(int x, int y)
{
    int result = x - y;
    std::cout << "x - y = " << x - y << std::endl;
}
void multiply(int x, int y)
{
    std::cout << "x * y = " << x * y << std::endl;
}
