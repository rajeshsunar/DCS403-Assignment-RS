#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

Node* insertIterative(Node* root, int value) {
    Node* newNode = new Node(value);

    if (root == nullptr)
        return newNode;

    Node* parent = nullptr;
    Node* current = root;

    while (current != nullptr) {
        parent = current;

        if (value < current->data)
            current = current->left;
        else if (value > current->data)
            current = current->right;
        else {

            cout << "Duplicate value (" << value << ") ignored.\n";
            delete newNode;
            return root;
        }
    }

    if (value < parent->data)
        parent->left = newNode;
    else
        parent->right = newNode;

    return root;
}

void inorder(Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = nullptr;

    int values[] = {50, 30, 70, 20, 40, 70, 30, 60, 80};

    cout << "Inserting values: ";
    for (int v : values) {
        cout << v << " ";
        root = insertIterative(root, v);
    }

    cout << "\n\nBST (Inorder Traversal): ";
    inorder(root);
    cout << endl;

    return 0;
}