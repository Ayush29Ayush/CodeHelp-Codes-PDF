#include<bits/stdc++.h>
using namespace std;

bool poweroftwo(int num)
{
    int setbitcount = 0;
    while (num)
    {
        if(num&1)
        {
            setbitcount = setbitcount + 1;
        }
        num = num>>1;
    }

    if (setbitcount == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cout<<endl<<"Enter a number : ";
    cin>>n;

    if (poweroftwo(n) == true)
    {
        cout<<endl<<"True";
    }
    else
    {
        cout<<endl<<"False";
    }
    
    return 0;
}