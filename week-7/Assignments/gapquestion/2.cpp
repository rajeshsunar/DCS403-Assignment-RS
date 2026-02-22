#include <iostream>
using namespace std;
class BST {
private:
    struct Node {
        int data;
        Node* left;
        Node* right;

        Node(int value) {
            data = value;
            left = nullptr;
            right = nullptr;
        }
    };
    Node* root;
    Node* insert(Node* node, int value) {
        if (node == nullptr)
            return new Node(value);

        if (value < node->data)
            node->left = insert(node->left, value);
        else if (value > node->data)
            node->right = insert(node->right, value);

        return node;
    }
    bool search(Node* node, int key) {
        if (node == nullptr)
            return false;
        if (node->data == key)
            return true;
        if (key < node->data)
            return search(node->left, key);
        else
            return search(node->right, key);
    }
    void inorder(Node* node) {
        if (node == nullptr)
            return;
        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }
    void preorder(Node* node) {
        if (node == nullptr)
            return;
        cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }
    void postorder(Node* node) {
        if (node == nullptr)
            return;
        postorder(node->left);
        postorder(node->right);
        cout << node->data << " ";
    }
    Node* copyTree(Node* otherRoot) {
        if (otherRoot == nullptr)
            return nullptr;
        Node* newNode = new Node(otherRoot->data);
        newNode->left = copyTree(otherRoot->left);
        newNode->right = copyTree(otherRoot->right);
        return newNode;
    }
    void deleteTree(Node* node) {
        if (node == nullptr)
            return;
        deleteTree(node->left);
        deleteTree(node->right);
        delete node;
    }
public:
    BST() {
        root = nullptr;
    }
    BST(const BST& other) {
        root = copyTree(other.root);
    }
    BST& operator=(const BST& other) {
        if (this != &other) {
            deleteTree(root);
            root = copyTree(other.root);
        }
        return *this;
    }
    ~BST() {
        deleteTree(root);
    }
    void insert(int value) {
        root = insert(root, value);
    }
    bool search(int key) {
        return search(root, key);
    }
    void inorder() {
        inorder(root);
        cout << endl;
    }

    void preorder() {
        preorder(root);
        cout << endl;
    }

    void postorder() {
        postorder(root);
        cout << endl;
    }
    void displayLeftLeft() {
        if (root != nullptr &&
            root->left != nullptr &&
            root->left->left != nullptr) {

            cout << "root->left->left element: "
                 << root->left->left->data << endl;
        } else {
            cout << "Node does not exist." << endl;
        }
    }
};
int main() {

    BST tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    cout << "Inorder Traversal: ";
    tree.inorder();
    cout << "Preorder Traversal: ";
    tree.preorder();
    cout << "Postorder Traversal: ";
    tree.postorder();
    int key = 40;
    if (tree.search(key))
        cout << key << " found in BST." << endl;
    else
        cout << key << " not found in BST." << endl;
    tree.displayLeftLeft();
    return 0;
}