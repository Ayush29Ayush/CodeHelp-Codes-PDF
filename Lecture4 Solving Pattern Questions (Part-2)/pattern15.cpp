#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n : ";
    cin >> n;

    // char start = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j >= 3)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}