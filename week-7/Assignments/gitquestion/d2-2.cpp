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

void search(Node* head, int x) {
    Node* temp = head;
    int position = 1;
    
    while (temp != NULL) {
        if (temp->data == x) {
            cout << "Element " << x << " found at position " << position << endl;
            return;
        }
        temp = temp->next;
        position++;
    }
    
    cout << "Element " << x << " not found in the list" << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    
    Node* head = createList(arr, size);
    
    search(head, 30);
    search(head, 60);
    
    return 0;
}