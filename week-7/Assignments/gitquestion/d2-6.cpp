#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createList(int arr[], int size) {
    if (size == 0) return NULL;
    Node* head = new Node();
    head->data = arr[0];
    head->next = NULL;
    Node* temp = head;
    for (int i = 1; i < size; i++) {
        Node* newNode = new Node();
        newNode->data = arr[i];
        newNode->next = NULL;
        temp->next = newNode;
        temp = newNode;
    }
    return head;
}

void deleteAtPosition(Node*& head, int position) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    
    // Delete head node
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Deleted node at position " << position << endl;
        return;
    }
    
    // Traverse to position-1
    Node* temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    
    if (temp == NULL || temp->next == NULL) {
        cout << "Invalid position" << endl;
        return;
    }
    
    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
    cout << "Deleted node at position " << position << endl;
}

void traverse(Node* head) {
    cout << "List: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    
    Node* head = createList(arr, size);
    traverse(head);
    
    deleteAtPosition(head, 3);
    traverse(head);
    
    return 0;
}