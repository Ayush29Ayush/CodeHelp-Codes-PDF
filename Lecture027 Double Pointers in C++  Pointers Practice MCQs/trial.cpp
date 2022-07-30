#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int i = 5;
    // int* ptr = &i;
    // int** ptr2 = &ptr;


    // cout<<"Address : "<<ptr<<" & "<<"Value : "<<*ptr<<endl;
    // cout<<"Address : "<<ptr2<<" & "<<"Value : "<<*ptr2<<" Pointed at : "<<**ptr2<<endl;

    // **ptr2 = **ptr2 + 1;

    // cout<<"Address : "<<ptr<<" & "<<"Value : "<<*ptr<<endl;
    // cout<<"Address : "<<ptr2<<" & "<<"Value : "<<*ptr2<<" Pointed at : "<<**ptr2<<endl;

    int first = 100;
    int *p = &first;
    int **q = &p;
    int second = ++(**q);
    int *r = *q;
    ++(*r);
    cout<<first<<" "<<second<<endl<<endl;
    
    cout<<p<<" "<<*p<<endl;
    cout<<q<<" "<<*q<<endl;
    cout<<r<<" "<<*r<<endl;

    return 0;
}