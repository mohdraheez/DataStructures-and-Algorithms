#include<iostream>
using namespace std;
#define max 5
int stack[max],top=-1;

void push(){
    if(top==max-1)
    cout<<"stack is full"<<endl;
    else{
        int elem;
        cout<<"Enter elem to be pusshed"<<endl;
        cin>>elem;
        stack[++top]=elem;
        cout<<"Element pusshed is "<<elem<<endl;
    }
}

int pop(){
    if(top==-1)
    cout<<"Underflow"<<endl;
    else{
        return stack[top--];
    }
}

void display(){

    if(top==-1)
    cout<<"underflow"<<endl;
    else{
        cout<<"Stack elements are"<<endl;
        for(int i=top;i>0;i--)
            cout<<stack[i]<<endl;
    }
}

void palindrome(){
    if(top==-1)
    cout<<"underflow"<<endl;
    else{
        int i,j;

        for(i=top,j=0;i>top/2;i--,j++){
            if(stack[i]==stack[j])
            continue;
            cout<<"not palindrome"<<endl;
            return;
        }
        cout<<"palindrome"<<endl;
    }
}

int main()
{
    int choice,elem;

    while(1){
        cout<<"Enter a choice 1.push 2.pop 3.display 4.palindrome 5.exit"<<endl;
        cin>>choice;

        switch(choice){
            case 1: push();
            break;
            case 2: elem = pop();
                cout<<"poped elem is "<<elem<<endl;
            break;
            case 3: display();
            break;
            case 4: palindrome();
            break;
            case 5: exit(0);
            default: cout<<"Wrong choice"<<endl;
            break;
        }
    }
}