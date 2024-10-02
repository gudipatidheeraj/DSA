#include<iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
};

void insertAtBeginning(Node** head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}


void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
insertAtBeginning(&head, 5);
cout << "Linked list after : ";
    printList(head);

    return 0;
}