#include<iostream>
using namespace std;

int fib(int n){

    if(n==0)
    return 0;
    else if(n==1 || n==2)
        return 1;
    else 
    return fib(n-1)+fib(n-2);
}

int main()
{
    int choice,n;
    while(1){
        cout<<"press 1 : to find fib of one particular number"<<endl<<"press 2 : to find fib of n numbers"<<endl<<"press 0 :to exit"<<endl;
        cin>>choice;

        switch(choice){
            case 1: 
                    cout<<"Enter a number to find fibonocci of that number"<<endl;
                    cin>>n;
                    cout<<"Fib of "<<n<<" is "<<fib(n)<<endl;
            break;

            case 2: cout<<"Enter a number to find fibonocci of that number"<<endl;
                    cin>>n;
                    for(int i=0;i<=n;i++){
                        cout<<"Fib of "<<i<<" is "<<fib(i)<<endl;
                    }
            break;

            case 0: exit(0);
            break;

            default: 
                cout<<"Wrong choice.. Make correct choice .. or press 0 to exit"<<endl;
            break;
        }
    }
}