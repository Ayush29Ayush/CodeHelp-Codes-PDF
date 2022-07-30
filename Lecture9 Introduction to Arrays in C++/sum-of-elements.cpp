#include<bits/stdc++.h>
using namespace std;

int sumofelements(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[5] = {1,2,3,4,5};

    int sumarray = sumofelements(arr,5);

    cout<<endl<<"Sum of elements : "<<sumarray;

    return 0;
}