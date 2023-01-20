#include <bits/stdc++.h> 
using namespace std;
int fibonacciNumber(int n){
    // Write your code here.
    
    int a=1;
    int b=1;
    
    int fibo=0;
    for(int i=0;i<n;i++)
    {
        fibo=a+b;
        a=b;
        b=fibo;
    }
   return fibo;
}
main()
{
	int n;
	cin>>n;
	cout<<fibonacciNumber(n);
}
