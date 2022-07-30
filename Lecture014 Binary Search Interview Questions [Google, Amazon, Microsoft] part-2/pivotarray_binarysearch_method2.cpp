#include<iostream>
using namespace std;

int getPivot(int arr[], int n){

    int start = 0;
    int end = n - 1;
    

    while (start<=end)
    {
        int mid = start + (end-start)/2;

        if(arr[mid]>arr[mid+1]){
            return (mid+1);
        }
        else if (arr[mid]>=arr[start]){
            start = mid+1;
        }
        else if (arr[mid]<=arr[start]) {
            end = mid;
        }
    }
    return 0;
}

int main() {

    int arr[5] = {3,8,10,1,17};

    cout<<"Pivot is "<<getPivot(arr,5)<<endl;

    return 0;
}