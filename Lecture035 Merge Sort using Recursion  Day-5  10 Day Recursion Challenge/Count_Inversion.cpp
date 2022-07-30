// C++ program to Count Inversions
// in an array
#include <bits/stdc++.h>
using namespace std;

int getInvCount(int arr[], int n)
{
    int inv_count = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                inv_count++;

    return inv_count;
}

// Driver Code
int main()
{
    int arr[] = {2,5,1,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << " Number of inversions are " << getInvCount(arr, n);
    return 0;
}

//! Time Complexity => O(N^2)

/*
Formally speaking, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j
Example:

Input: arr[] = {8, 4, 2, 1}
Output: 6

Explanation: Given array has six inversions:
(8, 4), (4, 2), (8, 2), (8, 1), (4, 1), (2, 1).

----------------------------------------------------

Input: arr[] = {3, 1, 2}
Output: 2

Explanation: Given array has two inversions:
(3, 1), (3, 2)
*/