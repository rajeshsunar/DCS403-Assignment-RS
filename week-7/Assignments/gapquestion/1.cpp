#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

int main()
{
    Node* root = new Node(50);
    root->left = new Node(30);
    root->left->left = new Node(20);

    if (root != NULL &&
        root->left != NULL &&
        root->left->left != NULL) {

        cout << "Element is: "
             << root->left->left->data << endl;
    } else {
        cout << "Node does not exist." << endl;
    }

    return 0;
}