int solve(int *input, int s, int e, int k){
    
    if(s>e){
        return -1;
    }
    
    int mid = s + (e-s)/2;
    
    if(input[mid] == k){
        return mid;
    }
    
    else if(input[mid] > k){
        return solve(input, s, mid-1, k);
    }
    else{
        return solve(input, mid+1, e, k);
    }
}

int binarySearch(int *input, int n, int val)
{
 	int ans = solve(input, 0, n-1, val);
    return ans;
}