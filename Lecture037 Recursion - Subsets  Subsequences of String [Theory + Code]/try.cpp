#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str = "ayush";
    // cout<<str[0]<<endl;

    // for(int i=0;i<str.size();i++)
    // {
    //     cout<<str[i]<<endl;
    // }

    char *ptr = &str[0];

    cout<<ptr<<endl<<endl;

    cout<<*ptr<<endl;

    return 0;
}