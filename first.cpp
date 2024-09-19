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

int main(){
    //static allocation
    //Node a;

    //Dynamic allocation
    Node* first = new Node(10);     
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    return 0;
   }
    