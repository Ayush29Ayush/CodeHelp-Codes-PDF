#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n : ";
    cin >> n;

    char start = 'A';

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << start;
        }
        start = start + 1;
        cout << "\n";
    }
}