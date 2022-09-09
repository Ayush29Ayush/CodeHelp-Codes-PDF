#include<bits/stdc++.h>
using namespace std;

//! Smallest element bola tha toh MAX_HEAP use kiya
//! If Largest element hota toh MIN_HEAP use karte

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        
        priority_queue<int> pq;
        
        //! step1
        for(int i = 0; i < k; i++)
        {
            pq.push(arr[i]);
        }
        
        //! step2
        for(int i = k; i <= r; i++)
        {
            if(arr[i] < pq.top())
            {
                pq.pop();
                pq.push(arr[i]);
            }
        }
        
        //! step3
        int ans = pq.top();
        return ans;
    }
};


 