#include<iostream>
using namespace std;

void print(int *p) {

    cout << *p << endl; 

}

void update(int *p) {

   // p = p + 1;
   //cout << "inside "<< p <<endl;
   *p = *p + 1;

}

int getSum(int *arr, int n) {
// int getSum(int arr[], int n) {
// dono same hi cheez hai 

    //! It will give output = 8 which is the size of the pointer because "arr" will store the address of the input given
    cout << endl << "Size : " << sizeof(arr) << endl;

    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
/*
    int value = 5;
    int *p = &value;

    //print(p);
    cout <<" Before " << *p << endl;
    update(p);
    cout <<" After " << *p << endl;
    */

    int arr[6] = {1,2,3,4,5,8};

    // cout << "Sum is " << getSum(arr ,6) << endl ;  
    cout << "Sum is " << getSum(arr+3 ,3) << endl ;  

    return 0;
}