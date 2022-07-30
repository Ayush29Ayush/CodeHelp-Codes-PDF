// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }

        else if (key > arr[mid])
        {
            // Right mein jao
            s = mid + 1;
        }

        else if (key < arr[mid])
        {
            // Left mein jao
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key)
{

    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        { // Right me jao
            s = mid + 1;
        }
        else if (key < arr[mid])
        { // left me jao
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int even[7] = {1, 2, 3, 3, 3, 3, 5};

    // cout << "First Occ of 3 is at Index " << firstOcc(even, 7, 3) << endl;
    // cout << "Last Occ of 3 is at Index " << lastOcc(even, 7, 3) << endl;
    int first = firstOcc(even, 7, 3);
    int last = lastOcc(even, 7, 3);
    int totalOcc = (last-first)+1;
    cout<<totalOcc;

    return 0;
}