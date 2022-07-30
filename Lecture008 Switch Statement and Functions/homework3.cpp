#include <iostream>
using namespace std;

int countsetbit(int n)
{
    int count = 0;
    while (n)
    {
        if (n & 1)
        {
            count = count + 1;
        }
        n = n >> 1;
    }
    return count;
}

int main()
{
    int a, b;
    cout << "Enter the value of a : ";
    cin >> a;

    cout << "Enter the value of b : ";
    cin >> b;

    int total1 = countsetbit(a);
    int total2 = countsetbit(b);
    int total3 = total1+total2;
    cout<<endl;
    cout<<"Total no. of set bits in a & b is "<<total3;

    return 0;
}