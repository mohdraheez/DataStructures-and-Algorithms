#include<iostream>
using namespace std;

bool sorted(int arr[],int size){
    for(int i=0;i<size-1;i++){
        if(arr[i]<=arr[i+1])
            continue;
        else
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout<<"Enter a array elements "<<endl;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(sorted(arr,n))
    cout<<"Array is sorted"<<endl;
    else
    cout<<"Array is not sorted"<<endl;
}