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

    // Recursive insert
    Node* insert(Node* node, int value) {
        if (node == nullptr)
            return new Node(value);

        if (value < node->data)
            node->left = insert(node->left, value);
        else if (value > node->data)
            node->right = insert(node->right, value);

        return node;
    }

    // Recursive inorder traversal
    void inorder(Node* node) const {
        if (node == nullptr)
            return;

        inorder(node->left);
        cout << node->data << " ";
        inorder(node->right);
    }

    // Deep copy helper
    Node* copyTree(Node* otherRoot) {
        if (otherRoot == nullptr)
            return nullptr;

        Node* newNode = new Node(otherRoot->data);
        newNode->left = copyTree(otherRoot->left);
        newNode->right = copyTree(otherRoot->right);

        return newNode;
    }

    // Delete helper (used in destructor)
    void deleteTree(Node* node) {
        if (node == nullptr)
            return;

        deleteTree(node->left);
        deleteTree(node->right);
        delete node;
    }

public:
    // Default constructor
    BST() {
        root = nullptr;
    }

    // Copy Constructor (Deep Copy)
    BST(const BST& other) {
        root = copyTree(other.root);
    }

    // Assignment Operator (Deep Copy)
    BST& operator=(const BST& other) {
        if (this != &other) {   // Prevent self-assignment
            deleteTree(root);  // Delete existing tree
            root = copyTree(other.root); // Deep copy
        }
        return *this;
    }

    // Destructor
    ~BST() {
        deleteTree(root);
    }

    // Public insert
    void insert(int value) {
        root = insert(root, value);
    }

    // Public inorder display
    void display() const {
        inorder(root);
        cout << endl;
    }
};

int main() {

    cout << "Original Tree:\n";
    BST tree1;
    tree1.insert(50);
    tree1.insert(30);
    tree1.insert(70);
    tree1.insert(20);
    tree1.insert(40);
    tree1.display();

    // Copy Constructor
    cout << "\nCopied Tree (Copy Constructor):\n";
    BST tree2 = tree1;
    tree2.display();

    // Assignment Operator
    cout << "\nAssigned Tree (Assignment Operator):\n";
    BST tree3;
    tree3 = tree1;
    tree3.display();

    return 0;
}










