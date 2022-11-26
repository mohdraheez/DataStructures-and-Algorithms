#include<iostream>
using namespace std;

int fib(int n){

    if(n==0 || n==1)
        return n;

    int fib1 = fib(n-1);
    int fib2 = fib(n-2);
    int ans = fib1+fib2;
    return ans;
}


int main()
{
    int n;
    cin>>n;
    cout<<fib(n);
}