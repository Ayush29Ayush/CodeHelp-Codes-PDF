//! Leetcode ques np. - 191
//! Must watch it's solution from video , explaination dekho

#include<iostream>
using namespace std;

int countOneBits(uint32_t n)
{
    int count=0;
    while(n!=0)
    {
        //! This is the method of checking last bit equal to 1 or not
        //! if condition tabhi chalega if condition is true ho i.e 1 , false(0) pe nahi chalega
        if(n&1)
        {
            count++;
        }
        n=n>>1;
    }
    return count;
}

int main()
{
    uint32_t n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<endl;
    
    cout<<"Answer is "<<countOneBits(n)<<endl;
}