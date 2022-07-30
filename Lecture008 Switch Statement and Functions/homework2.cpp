#include<iostream>
using namespace std;

int funcAP(int n)
{
    return ((3*n) + 7);
}

int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<endl;
    cout<<"Output for 3n+7 is "<<funcAP(n);

    return 0;
}