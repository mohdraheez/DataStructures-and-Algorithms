#include<iostream>
#define size 5
using namespace std;

class Cqueue{
    private:
        int que[size];
        int front,rear;
    public:
    Cqueue(){
        front =-1;
        rear=-1;
    }
    
    bool isFull(){
        if((rear+1)%size == front)
            return true;
        else
            return false;
    }
    bool isEmpty(){
        if(front==-1)
            return true;
        else
            return false;
    }

    void enQueue(int elem){
        if(isFull())
            cout<<"Queue is Full"<<endl;
        else{
            if(front==-1)
                front=0;
            rear=(rear+1)%size;
            que[rear]=elem;
            cout<<"inserted element is ->"<<elem<<endl;
        }
    }

    int deQueue(){
        if(isEmpty())
            cout<<"Queue is Empty"<<endl;
        else{
            int elem = que[front];
            if(front==rear)
                front=rear=-1;
            else
                front=(front+1)%size;
            cout<<"Deleted elem ->"<<elem<<endl;
            return elem;
        }
    }

    void display(){
        if(isEmpty())
            cout<<"Queue is Empty"<<endl;
        else{
            cout<<"Queue elements are->"<<endl;
            int i = front;
            while(i!=rear){
                cout<<que[i]<<endl;
                i=(i+1)%size;
            }
            cout<<que[i]<<endl;
        }
    }
};

int main()
{
    Cqueue q;
    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);
    q.enQueue(50);
    q.enQueue(60);
    q.enQueue(1);
    q.display();
    q.deQueue();
    q.display();
    q.deQueue();
    q.display();
    q.enQueue(100);
    q.display();
    
}