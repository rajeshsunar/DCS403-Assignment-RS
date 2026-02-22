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

void deleteByValue(Node*& head, int x) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    
    // If head node holds the value
    if (head->data == x) {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Deleted " << x << " from the list" << endl;
        return;
    }
    
    // Search for the value
    Node* temp = head;
    while (temp->next != NULL && temp->next->data != x) {
        temp = temp->next;
    }
    
    if (temp->next == NULL) {
        cout << "Element " << x << " not found" << endl;
        return;
    }
    
    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
    cout << "Deleted " << x << " from the list" << endl;
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
    
    deleteByValue(head, 30);
    traverse(head);
    
    return 0;
}