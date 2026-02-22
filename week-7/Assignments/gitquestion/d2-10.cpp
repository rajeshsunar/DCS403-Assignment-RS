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

void printReverse(Node* head) {
    if (head == NULL) {
        return;
    }
    
    // Recursively go to the end
    printReverse(head->next);
    
    // Print while returning
    cout << head->data << " ";
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
    
    cout << "Reverse order: ";
    printReverse(head);
    cout << endl;
    
    return 0;
}