#include<bits/stdc++.h>
using namespace std;

int main(){
    double Faren;
    cout<<"Enter temperature in F : ";
    cin>>Faren;
    cout<<"\n";
    double celc=((Faren-32)*5)/9;
    cout<<"Temperature in C : "<<celc;
    return 0;
}