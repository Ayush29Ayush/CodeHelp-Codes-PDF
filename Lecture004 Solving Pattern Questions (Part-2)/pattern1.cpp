// #include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n : ";
    cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << "\n";
    // }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << n - j + 1;
        }
        cout << "\n";
    }
}