#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node *next;
};

// struct node{
//     int value;
//     node *next;
// };

// node n = new node();

Node* getNode(int elm){
    Node *temp = new Node();
    temp->value = elm;
    return temp;
}

Node *head = getNode(NULL);

void insert_end(int elm){
    Node *temp = getNode(elm);
    

    if(head==NULL){
        head=temp;
        temp->next = NULL;
    }
    else{
        Node *flag = head;
        while(flag->next !=NULL){
            flag=flag->next;
        }
        flag->next = temp;
        temp->next = NULL;
    }
}

void insert_front(int elm){
    Node *temp = getNode(elm);
    if(head ==NULL){
        head=temp;
        temp->next = NULL;
    }
    else{
        temp->next = head;
        head = temp;
    }
}

void delete_front(){
    if(head == NULL){
        cout<<"List is empty"<<endl;
    }
    else{
        if(head->next == NULL){
            cout<<"Deleted element is "<<head->value<<endl;
            head = NULL;
        }
        else{
            Node *temp = head;
            cout<<"Deleted Element is "<<head->value<<endl;
            head=NULL;
            head = temp->next;
        }
    }
}

void delete_end(){
    if(head==NULL)
        cout<<"List is empty"<<endl;
    else{
        if(head->next == NULL){
            cout<<"Deleted Elem is "<<head->value<<endl;
            head = NULL;
        }
        else{
        Node *temp = head;
        Node *prev;
            while(temp->next!=NULL){
                prev = temp;
                temp = temp->next;
            }
            cout<<"deleted Elem is :"<<temp->value<<endl;
            prev->next = NULL;
            temp = NULL;
        } 
    }
}

int main(){
    head= NULL;
    insert_end(100);
    insert_end(200);
    insert_end(300);
    insert_front(999);
    insert_end(888);
    insert_front(19291);
    delete_front();
    delete_front();
    delete_front();
    insert_front(19291);
    insert_end(19291);
    delete_end();
    delete_end();
    insert_front(19291);
    insert_end(19291);


    while(head!=NULL){
        cout<<head->value<<endl;
        head=head->next;
    }
    return 0;
}
