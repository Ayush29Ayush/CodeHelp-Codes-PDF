#include<bits/stdc++.h>
//! T.C -> O(n^2 log(n))
//! S.C -> O(n^2)
int getKthLargest(vector<int> &arr, int k)
{
	vector<int> sumStore;
    int n = arr.size();
    
    //! Step1
    // use 2 pointer approach
    // isse subarray bante jayenge and saath hi saath unke sum leke sumStore pe daaldo
    for(int i = 0; i<n; i++)
    {
        int sum = 0;
        for(int j = i; j<n; j++)
        {
            sum += arr[j];
            sumStore.push_back(sum);
        }
    }
    //! Step2
    // sort them to make a ascending order 
    sort(sumStore.begin(), sumStore.end());
    
    //! Step3
    // return reqd. element
    return sumStore[sumStore.size() - k];  
}