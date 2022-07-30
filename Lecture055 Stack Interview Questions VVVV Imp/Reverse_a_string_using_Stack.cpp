#include<bits/stdc++.h>
using namespace std;
//! It is property of stack that it will return any string in reverse order due to its LIFO property.

int main()
{
    string str = "ayush";
    stack<char> s;
    string ans = "";

    for (int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }

    while (!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout<<endl;
    cout<<"Reversed string is : "<<ans<<endl;
    cout<<endl;

    return 0;
}

//! T.C -> O(N)
//! S.C -> O(N)
