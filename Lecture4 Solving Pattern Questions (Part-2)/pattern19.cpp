/*
    1 2 3 4 5 5 4 3 2 1
    1 2 3 4 * * 4 3 2 1 
    1 2 3 * * * * 3 2 1 
    1 2 * * * * * * 2 1 
    1 * * * * * * * * 1
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter value of n : ";
    cin >> n;
    cout<<endl;

    int row = 1;
    while (row <= n)
    {
        int col = 1;

        // Printing first traingle
        int tri_1 = n - row + 1;
        int value = 1;
        while (tri_1)
        {
            cout << value << " ";
            value++;
            tri_1--;
        }

        // Printing second traingle
        int start = row - 1;
        while (col <= row)
        {
            while (start)
            {
                cout << "* * ";
                start--;
            }
            col++;
        }

        // Printing third traingle
        int tri_3 = n - row + 1;
        while (tri_3)
        {
            cout << tri_3 << " ";
            tri_3--;
        }

        cout << endl;
        row++;
    }
    return 0;
}
