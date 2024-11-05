#include <iostream>

using namespace std;

void add(int a, int b)
{
    cout << "Addition of the two numbers : " << a + b << endl;
}

void sunstract(int a, int b)
{
    cout << "Substraction of the two numbers : " << a - b << endl;
}

void multiplication(int a, int b)
{
    cout << "Multiplications of the two numbers : " << a * b << endl;
}

void division(int a, int b)
{
    cout << "Division of the two numbers : " << a / b << endl;
}

void modulo(int a, int b)
{
    cout << "Reminder of the two numbers : " << a % b << endl;
}

int main()
{
    int a = 10;
    int b = 20;

    add(a, b);
    sunstract(a, b);
    multiplication(a, b);
    division(a, b);
    modulo(a, b);

    return 0;
}