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

void insertAfterValue(Node* head, int x, int y) {
    Node* temp = head;
    
    // Search for node with value x
    while (temp != NULL && temp->data != x) {
        temp = temp->next;
    }
    
    if (temp == NULL) {
        cout << "Value " << x << " not found in the list" << endl;
        return;
    }
    
    // Create new node with value y
    Node* newNode = new Node();
    newNode->data = y;
    newNode->next = temp->next;
    temp->next = newNode;
    
    cout << "Inserted " << y << " after " << x << endl;
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
    
    insertAfterValue(head, 30, 35);
    traverse(head);
    
    return 0;
}