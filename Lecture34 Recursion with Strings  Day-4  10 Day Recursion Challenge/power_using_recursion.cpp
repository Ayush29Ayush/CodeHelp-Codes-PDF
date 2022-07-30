#include <iostream>
using namespace std;

int power(int a, int b)
{
    // Base Case
    if (b == 0)
        return 1;

    if (b == 1)
        return a;

    // Recursive Call
    int ans = power(a, b / 2);

    //even
    if (b % 2 == 0)
        return ans * ans;
    //odd
    else
        return a * ans * ans;
}

int main()
{

    int a, b;

    cout << "Enter value of a : ";
    cin >> a;
    cout << "Enter value of b : ";
    cin >> b;
    cout << endl;

    int ans = power(a, b);

    cout << "Answer is " << ans << endl;

    return 0;
}