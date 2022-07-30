#include<iostream>
using namespace std;

void sortArray(int *arr, int n) {

    //base case - already sorted
    if(n == 0 || n == 1) {
        return ;
    }

    //1 case sovle karlia - largest element ko end me rakh dega
    for(int i=0; i<n-1; i++) {
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    //Recursive Call
    sortArray(arr, n-1);

}

int main() {

    int arr[4] = {3,1,4,2};
    
    sortArray(arr,4);

    for(int i=0; i<4; i++) {
        cout << arr[i] << " ";
    }cout << endl;


    return 0;
}