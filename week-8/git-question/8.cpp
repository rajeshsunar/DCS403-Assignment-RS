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

Node* findMin(Node* root) {
    while (root->left != nullptr)
        root = root->left;
    return root;
}

Node* deleteNode(Node* root, int key) {
    if (root == nullptr)
        return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {

        if (root->left == nullptr && root->right == nullptr) {
            delete root;
            return nullptr;
        }

        else if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        else {
            Node* successor = findMin(root->right);
            root->data = successor->data;
            root->right = deleteNode(root->right, successor->data);
        }
    }
    return root;
}

Node* searchBST(Node* root, int key) {
    if (root == nullptr || root->data == key)
        return root;
    if (key < root->data)
        return searchBST(root->left, key);
    else
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
    int n, value, key;

    cout << "Enter number of nodes: ";
    cin >> n;
    cout << "Enter " << n << " values:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        root = insert(root, value);
    }

    cout << "\nBST (Inorder Traversal): ";
    inorder(root);
    cout << endl;

    cout << "\nEnter value to delete: ";
    cin >> key;
    root = deleteNode(root, key);

    cout << "BST after deletion (Inorder Traversal): ";
    inorder(root);
    cout << endl;

    cout << "\nEnter value to search: ";
    cin >> key;
    Node* result = searchBST(root, key);

    if (result != nullptr)
        cout << "Key " << key << " exists in BST.\n";
    else
        cout << "Key " << key << " does not exist in BST.\n";

    return 0;
}