#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* temp=head;
    int getLength() {
        int length = 0;
        Node* temp = head;
        while (temp != NULL) {
            length++;
            temp = temp->next;
        }
        return length;
    }
   int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);  
    return 0;
   }
    
};
    