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

Node* insert(Node* root, int value) {
    if (root == nullptr)
        return new Node(value);

    if (value < root->data)
        root->left = insert(root->left, value);

    else if (value > root->data)
        root->right = insert(root->right, value);

    else
        cout << "Duplicate value (" << value << ") ignored.\n";

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
        root = insert(root, v);
    }

    cout << "\n\nBST (Inorder Traversal): ";
    inorder(root);
    cout << endl;

    return 0;
}