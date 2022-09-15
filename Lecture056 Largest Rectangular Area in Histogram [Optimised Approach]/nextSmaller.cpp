#include<stack>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    
    for(int i=n-1;i>=0;i--)
    {
        int curr = arr[i];
        // basically curr < s.top() dekhna hai means ki curr element top se chota hai ki nahi
        while(s.top()>=curr)
        {
            s.pop();
        }
        //! ans is stack ka top
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}

//! this is next smaller element => for loop from end to begin

//! same code for prev smaller element => for loop from begin to end

//TODO -> dry run karke dekho, samajh aa jayega