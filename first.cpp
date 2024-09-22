#include<iostream>
using namespace std;

// class creation 
class Node{
    public:
    int data;//val
    Node* next;//address of successor


//use of constructor-> whenver we craete object x
// default constructor
    Node(){// default constructor
    cout<<"I am inside a default contrctor"<<endl;

    this->data=data;
    }
    Node(int data){ // parametrized constructor .    
    cout<<"I am inside parametrized Constructor "<<endl;
    this->next = NULL;
    }
};
void printLL(Node* head){
    //whenever linkedlist passed in head pointer or tail pointer
    // we will not use original pointer, we will make temporary pointer
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp<<data;

        temp=temp->next;

    }
}
int main(){
    //static allocation
    //Node 
    //Dynamic allocation
    Node* first = new Node(10);     
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;
    Node* head = first;

    return 0;
   }
    