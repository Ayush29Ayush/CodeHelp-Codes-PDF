#define mod 1000000007
#include<vector>
/*
// 1st solution using recursion
//in this approach time complexity is exponential
long long int solve(int n) {
    //base case
    if(n == 1) return 0;
    if(n == 2) return 1;
    long long int ans = (n-1)%mod * ((solve(n-1))%mod + (solve(n-2))%mod)%mod;
    return ans;
}

long long int countDerangements(int n) {
    long long int ans = solve(n);
    return ans;
}
*/
/*
//2nd solution using recursion + memoisation
//in this approach time complexity is O(n) && space complexity is O(n)+O(n)
long long int solve(int n, vector<long long int>&dp) {
    //base case
    if(n == 1) return 0;
    if(n == 2) return 1;
    if(dp[n] != -1) return dp[n];
    dp[n] = (n-1)%mod * ((solve(n-1,dp))%mod + (solve(n-2,dp))%mod)%mod;
    return dp[n];
}

long long int countDerangements(int n) {
    vector<long long int>dp(n+1,-1);
    long long int ans = solve(n,dp);
    return ans;
}
*/
/*
//3rd solution using tabulation method
//in this approach time complexity is O(n) && space complexity is O(n)
long long int solve(int n) {
    vector<long long int>dp(n+1,0);
    dp[1] = 0;
    dp[2] = 1;
    for(int i=3; i<=n; i++) {
       dp[i] = (i-1)%mod * ((dp[i-1])%mod + (dp[i-2])%mod)%mod;    
    }
    return dp[n];
}

long long int countDerangements(int n) {
    long long int ans = solve(n);
    return ans;
}
*/
//4th solution using space optimizatation
//in this approach time complexity is O(n) && space complexity is O(1)
long long int solve(int n) {
    long long int prev2 = 0;
    long long int prev1 = 1;
    for(int i=3; i<=n; i++) {
       long long int ans = (i-1)%mod * (prev1%mod + prev2%mod)%mod;  
       prev2 = prev1;
        prev1 = ans;
    }
    return prev1;
}

long long int countDerangements(int n) {
    long long int ans = solve(n);
    return ans;
}