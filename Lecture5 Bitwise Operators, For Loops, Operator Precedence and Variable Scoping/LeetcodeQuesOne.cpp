//! Ques no. - 1281

#include<bits/stdc++.h>
using namespace std;

int subtProdandSum(int n)
{
    int prod = 1;
    int sum = 0;

    while(n!=0)
    {
        int digit = n%10;
        prod = prod * digit;
        sum = sum + digit;

        n = n/10;
    }
    int answer = prod - sum;
    return answer;
}

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;

    cout<<endl;
    cout<<"Answer is "<<subtProdandSum(n);
    cout<<endl;
}