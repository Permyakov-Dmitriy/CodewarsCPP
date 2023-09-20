#include <iostream>

using namespace std;

int fibonacci(int n)
{
    int a = 0;
    int b, c = 1;

    if (n == 1)
    {
        return a;
    } 
    else if (n == 2)
    {
        return b;
    }

    for (size_t i = 0; i < n - 2; i++)
    {
        b = c;
        c = a + b;
        a = b;
    }

    return c;
}

int main()
{
    cout << fibonacci(6);
}