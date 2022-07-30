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
        for (int j = 0; j < n; j++)
        {
            cout << char(start + j);
            // start = start + j;
        }
        cout << "\n";
    }
}