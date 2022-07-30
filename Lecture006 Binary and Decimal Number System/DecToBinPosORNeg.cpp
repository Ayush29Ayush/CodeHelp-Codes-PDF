#include <iostream>
#include <math.h>
#include <bitset>
using namespace std;
int main()
{
    cout << "Enter a number positive or negative :";
    int n;
    cin >> n;
    bitset<32> x(n);
    cout << "Binary of decimal number bot positive and negative :" << x;
    return 0;
}