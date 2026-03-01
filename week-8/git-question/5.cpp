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

    return root;
}

Node* findMinRecursive(Node* root) {
    if (root == nullptr)
        return nullptr;

    if (root->left == nullptr)
        return root;

    return findMinRecursive(root->left);
}

Node* findMaxRecursive(Node* root) {
    if (root == nullptr)
        return nullptr;

    if (root->right == nullptr)
        return root;

    return findMaxRecursive(root->right);
}

Node* findMinIterative(Node* root) {
    if (root == nullptr)
        return nullptr;

    Node* current = root;
    while (current->left != nullptr)
        current = current->left;

    return current;
}

Node* findMaxIterative(Node* root) {
    if (root == nullptr)
        return nullptr;

    Node* current = root;
    while (current->right != nullptr)
        current = current->right;

    return current;
}


void inorder(Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = nullptr;

    int values[] = {50, 30, 70, 20, 40, 60, 80};

    for (int v : values)
        root = insert(root, v);

    cout << "BST (Inorder): ";
    inorder(root);
    cout << endl;

    Node* minRec = findMinRecursive(root);
    Node* maxRec = findMaxRecursive(root);

    Node* minItr = findMinIterative(root);
    Node* maxItr = findMaxIterative(root);

    cout << "\nRecursive Min: " << (minRec ? minRec->data : -1);
    cout << "\nRecursive Max: " << (maxRec ? maxRec->data : -1);

    cout << "\nIterative Min: " << (minItr ? minItr->data : -1);
    cout << "\nIterative Max: " << (maxItr ? maxItr->data : -1);

    return 0;
}