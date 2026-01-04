#include <iostream>
using namespace std;

class BST {
public:
    struct Node {
        int data;
        Node* left;
        Node* right;
    };

    Node* root;

    BST() {
        root = nullptr;
    }

    Node* createNode(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->left = nullptr;
        newNode->right = nullptr;
        return newNode;
    }

    void insertValue(int value) {
        root = insertNode(root, value);
    }

    Node* insertNode(Node* node, int value) {
        if (node == nullptr)
            return createNode(value);
        if (value < node->data)
            node->left = insertNode(node->left, value);
        else if (value > node->data)
            node->right = insertNode(node->right, value);
        return node;
    }

    void searchValue(int value) {
        if (searchNode(root, value) == nullptr)
            cout << "Element not found" << endl;
        else
            cout << "Element found" << endl;
    }

    Node* searchNode(Node* node, int value) {
        if (node == nullptr || node->data == value)
            return node;
        if (value < node->data)
            return searchNode(node->left, value);
        else
            return searchNode(node->right, value);
    }

    void displayIn(Node* node) {
        if (node == nullptr)
            return;
        displayIn(node->left);
        cout << node->data << " ";
        displayIn(node->right);
    }
};

int main() {
    BST bst;

    bst.insertValue(50);
    bst.insertValue(30);
    bst.insertValue(70);
    bst.insertValue(20);
    bst.insertValue(40);
    bst.insertValue(60);
    bst.insertValue(80);

    cout << "Searching for 60: ";
    bst.searchValue(60);

    cout << "Searching for 25: ";
    bst.searchValue(25);

    cout << "Inorder Traversal: ";
    bst.displayIn(bst.root);
    cout << endl;

    return 0;
}
