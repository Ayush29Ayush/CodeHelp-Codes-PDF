#include<iostream>
using namespace std;

int getSum(int *arr, int size)
{
    //Base Condition
    if(size==0)
    {
        return 0;
    }
    if(size==1)
    {
        return arr[0];
    }

    int remaining = getSum(arr+1,size-1);
    int sum = arr[0] + remaining;

    return sum;
}

int main() {

    int arr[5] = {1,2,3,4,5};
    int size = 5;

    int sum = getSum(arr, size);

    cout<<endl;
    cout << "Sum is : " << sum << endl;

    return 0;
}