#include<bits/stdc++.h>
//! T.C-> O(n^2)
//! S.C-> O(k)
int getKthLargest(vector<int> &arr, int k)
{
    //TODO refer -> https://youtu.be/_9F2VgZcvdw?t=1096
    // K size ka ek min heap banao so that ek traversal ke baad minheap ke top pe kth largest sum hoga and then aage jaake agar koi aur sum milta hai jo top() se bada hai toh top() ko pop() karake voh wala sum daal dena

	// make a min_heap
    priority_queue<int, vector<int>, greater<int>> mini;
    int n = arr.size();
    
    // 2 pointer approach 
    // traverse and store subarray sum
    // relate sum with min_heap
    for(int i = 0; i<n; i++)
    {
        int sum = 0;
        for(int j = i; j<n; j++)
        {
            sum += arr[j];
            
            if(mini.size() < k)
                mini.push(sum);
            else
            {
                if(sum > mini.top())
                {
                    mini.pop();
                    mini.push(sum);
                }
            }
        }
    }
    
    // the top element will be the ans
    return mini.top();
}