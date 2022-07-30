#include <iostream>
using namespace std;

int fibonacci(int n)
{
    int a = 0;
    int b = 1;
    int prev_digit = a;
    int for_digit = b;
    int result = 0;
    for (int i = 3; i <= n; i++)
    {
        result = (prev_digit + for_digit);
        prev_digit = for_digit;
        for_digit = result;
    }
    if (n == 1)
    {
        return a;
    }
    if (n == 2)
    {
        return b;
    }
    return result;
}

int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
}
