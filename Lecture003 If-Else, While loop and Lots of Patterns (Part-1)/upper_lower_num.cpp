#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a number or character : ";
    cin>>ch;
    if(ch>=48 && ch<=57){
        cout<<"This is a number";
    }
    else if(ch>=97 && ch<=122){
        cout<<"This is lowercase";
    }
    else if(ch>=65 && ch<=90){
        cout<<"This is Uppercase";
    }
    return 0;
}