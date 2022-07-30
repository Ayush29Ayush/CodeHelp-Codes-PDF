#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n : ";
    cin >> n;

    char start = 'A';
    // int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << char(start + i + j);
        }
        cout << "\n";
    }
}