#include <iostream>
using namespace std;

int Fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if(n == 1 )
        return 1;
    else 
    {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}
int Fibonacci2(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, result = 0;

    for (int i = 2; i <= n; i++)
    {
        result = a + b;
        a = b;
        b = result;
    }

    return result;
}

int main()
{
    for(int i=0; i<15; i++)
        cout << Fibonacci(i) << " ";
    
    cout << endl;

    for (int i = 0; i < 15; i++)
        cout << Fibonacci2(i) << " ";

    cout << endl;
}
