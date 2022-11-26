#include<iostream>
#define size 5
using namespace std;

class queue{
  private:
    int que[size],front,rear;

  public:
    queue(){
      front =-1;
      rear =-1;
    }

    bool isFull(){
      if(rear == size-1)
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

    void enQueue(int insert){
      if(isFull())
        cout<<"Queue is Full"<<endl;
      else{
        if(front==-1)
          front =0;
        que[++rear]=insert;
        cout<<"Inserted ->"<<insert<<endl;
      }
    }

    int deQueue(){
      if(isEmpty())
        cout<<"Queue is Empty"<<endl;
      else{
        int elem = que[front];
        if(front >= rear){
          front = -1;
          rear = -1;
        }
        else
          front++;
        
        cout<<"Deleted->"<<elem<<endl;
        return elem;
      }
    }

    void display(){
      if(isEmpty())
        cout<<"Queue is Empty";
      else{
        cout<<"Elements are =>"<<endl;
        for(int i=front;i<=rear;i++)
          cout<<que[i]<<endl;
        cout<<"rear->"<<rear<<endl<<"front->"<<front<<endl;
      }
    }
};


int main(){
  queue q ;
  q.enQueue(10);
  q.enQueue(20);
  q.display();
  q.deQueue();
  q.display();
}