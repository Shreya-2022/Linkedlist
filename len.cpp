#include<iostream>
using namespace std;

// class creation 
class Node{
    public:
    int data;//val
    Node* next;//address of successor

}
void printLL(Node*head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}
int getLength(Node* head){
    Node* temp=head;
    int count =0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
int main(){
    //creation of node
    //node a;
    Node* first = new Node(10);
    Node* second = new Node(20);
     Node* Third= new Node(303);
}

