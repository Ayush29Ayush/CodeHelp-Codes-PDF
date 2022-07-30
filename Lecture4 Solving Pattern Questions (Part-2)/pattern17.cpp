#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n : ";
    cin >> n;

    // char start = 'A';

    for (int i = 1; i <= n; i++)
    {
        int space = i - 1;
        for (int j = 1; j <= n; j++)
        {
            if(space < j)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout << "\n";
    }
}