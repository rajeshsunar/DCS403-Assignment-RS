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

Node* searchBST(Node* root, int key) {

    if (root == nullptr || root->data == key)
        return root;


    if (key < root->data)
        return searchBST(root->left, key);

    return searchBST(root->right, key);
}

void inorder(Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = nullptr;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    cout << "BST (Inorder Traversal): ";
    inorder(root);
    cout << endl;

    int key;
    cout << "Enter value to search: ";
    cin >> key;

    Node* result = searchBST(root, key);

    if (result != nullptr)
        cout << "Key found: " << result->data << endl;
    else
        cout << "Key not found." << endl;

    return 0;
}