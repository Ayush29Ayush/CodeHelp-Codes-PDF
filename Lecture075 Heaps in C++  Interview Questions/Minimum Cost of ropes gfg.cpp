//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        //! min heap banao so that minimum wala upar aa jaye
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        
        //! sab elements ko pq mein daal do
        for(int i = 0; i<n; i++)
        {
            pq.push(arr[i]);
        }
        
        
        long long a,b;
        long long sum;
        long long cost = 0;
        
        while(pq.size()!=1) // pq.size()>1 bhi use kar sakte hai
        {
            a = pq.top();
            pq.pop();
            
            b = pq.top();
            pq.pop();
            
            sum = a+b;
            cost += sum;
            pq.push(sum);
        }
        
        return cost;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends