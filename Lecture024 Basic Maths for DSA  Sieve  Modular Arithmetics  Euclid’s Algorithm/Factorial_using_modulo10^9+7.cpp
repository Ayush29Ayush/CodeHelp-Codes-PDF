#include<iostream>
using namespace std;

unsigned long long factorialModulo(int n)
{
	const unsigned int M = 1000000007;

	unsigned long long f = 1;
	for (int i = 1; i <= n; i++)
		f = (f*i) % M; // Now f can never exceed 10^9+7
	return f;
}


int main()
{
    int n = 212;

    cout<<"The factorial of 212 is : "<<factorialModulo(n)<<endl;
}