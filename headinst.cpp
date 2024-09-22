// 



#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;  // Corrected to declare `next` as a pointer to Node

    // Constructor to initialize a node
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Function to insert a node at the head of the linked list
void insertAtHead(Node* &head, int data) {
    // Create a new node
    Node* newNode = new Node(data);
    
    // Attach new node to head node
    newNode->next = head;
    
    // Move head to point to the new node
    head = newNode;
}

// Function to print the entire linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Creating nodes
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    
    // Connecting nodes
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Linked list head points to the first node
    Node* head = first;

    // Print the entire linked list
    cout << "Printing the entire linked list: " << endl;
    printList(head);

    // Inserting a node at the head of the list
    insertAtHead(head, 500);

    // Print the linked list after inserting new node at the head
    cout << "After inserting 500 at the head: " << endl;
    printList(head);

    return 0;
}
