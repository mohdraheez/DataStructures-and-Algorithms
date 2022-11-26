#include<iostream>
using namespace std;

int arr[100],n;

void create(){
    cout<<"Enter array size"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}

void insert(){
    int elem,pos;
    cout<<"Enter the elem to be inserted & position"<<endl;
    cin>>elem>>pos;

    for(int i=n-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    n++;
    arr[pos-1] = elem;
}

void Delete()
{
    int pos;
    cout<<"Enter a position to be deleted"<<endl;
    cin>>pos;
    for(int i=pos-1;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
}

void display(){
    int i;
    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int choice;

    while(1)
    {
        cout<<"make a choice\n1.create\n2.display\n3.insert\n4.delete\n5.exit\n";
        cin>>choice;
        switch(choice)
        {
            case 1:create();
            break;
            case 2:display();
            break;
            case 3:insert();
            break;
            case 4:Delete();
            break;
            case 5:exit(0);
            break;
            default:cout<<"invalid choice\n";
            break;
        }
    }
    return 0;
}

