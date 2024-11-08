// BST and AVL Implementation Template
// Instructions: Implement the missing function definitions for each class.
// Each function has comments indicating what it should do.

#include <iostream>
#include <queue>

// Binary Search Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;
    int height;  // For AVL Tree

    Node(int value) : data(value), left(nullptr), right(nullptr), height(1) {}
};

// Binary Search Tree Implementation
class BST {
private:
    Node* root;

    // TODO: Implement private helper functions
    Node* insertRec(Node* node, int value) {
        // TODO: Implement recursive insert
        if (node == nullptr) {
            return new Node (value);
        }

        if (value < node->data) {
            node->left = insertRec(node->left, value);
        }

        else if (value > node->data) {
            node->right = insertRec(node->right, value);
        }

        else {
            return node;
        }

        return node;
    }

    Node* findMin(Node* node) {
        // TODO: Implement find minimum node
        while (node->left != nullptr) {
            node = node->left;
        }
        
        return node;
    }

    Node* deleteRec(Node* node, int value) {
        // TODO: Implement recursive delete
        if (node == nullptr) {
            return nullptr;
        }

        if (value < node->data) {
            node->left = deleteRec(node->left, value);
        }

        else if (value > node->data) {
            node->right = deleteRec(node->right, value);
        }

        else {
            if (node->left == nullptr) {
                Node* temp = node->right;
                delete node;
                return temp;
            }

            if (node->right == nullptr) {
                Node* temp = node->left;
                delete node;
                return temp;
            }

            Node* midRight = node->right;

            while (midRight->left != nullptr) {
                midRight = midRight->left;
            }

            node->data = midRight->data;

            node->right = deleteRec(node->right, midRight->data);
        }

        return node;
    }

    void inorderRec(Node* node) {
        // TODO: Implement recursive inorder traversal
        if (node == nullptr) {
            return;
        }

        inorderRec(node->left);
        std::cout << node->data << " ";
        inorderRec(node->right);
    
    }

    void clearRec(Node* node) {
        // TODO: Implement recursive clear
        if (node == nullptr) {
            return;
        }

        clearRec(node->left);
        clearRec(node->right);
        delete node;
    }

public:
    BST() : root(nullptr) {}

    ~BST() {
        // TODO: Implement destructor
        clearRec(root);
    }

    void insert(int value) {
        // TODO: Implement insert
        root = insertRec(root, value);
    
    }

    void remove(int value) {
        // TODO: Implement remove
        root = deleteRec(root, value);
    }

    bool search(int value) {
        // TODO: Implement search
        Node* temp = root;
        if (root == nullptr) {
            return false;
        }

        while (temp != nullptr) {
            if (temp->data == value) {
                return true;
            }

            else if (temp->data > value) {
                temp = temp->left;
            }

            else {
                temp = temp->right;
            }
        }

        return false;
    }

    void inorder() {
        // TODO: Implement inorder traversal
        inorderRec(root);
    }
};

// AVL Tree Implementation
class AVLTree {
private:
    Node* root;

    int height(Node* node) {
        // TODO: Implement height calculation
        if (node == nullptr) {
            return 0;
        }

        int leftHeight = height(node->left);
        int rightHeight = height(node->right);
        return 1 + std::max(leftHeight, rightHeight);
    }

    int getBalance(Node* node) {
        // TODO: Implement balance factor calculation
        if (node == nullptr) {
            return 0;
        }
        return height(node->right) - height(node->left);
    }

    Node* rightRotate(Node* y) {
        // TODO: Implement right rotation
        Node* x = y->left;
        Node* z = y->left->right;

        x->right = y;
        y->left = z;

        y->height = 1 + std::max(height(y->left), height(y->right));
        x->height = 1 + std::max(height(x->left), height(x->right));

        return x;
    }

    Node* leftRotate(Node* x) {
        // TODO: Implement left rotation
        Node* y = x->right;
        Node* z = y->left;

        y->left = x;
        x->right = z;

        y->height = 1 + std::max(height(y->left), height(y->right));
        x->height = 1 + std::max(height(x->left), height(x->right));

        return y;
    }

    Node* insertRec(Node* node, int value) {
        // TODO: Implement recursive AVL insert with balancing
        if (node == nullptr) {
            return new Node (value);
        } 

        if (value < node->data) {
            node->left = insertRec(node->left, value);
        }

        else if (value > node->data) {
            node->right = insertRec(node->right, value);
        }

        else {
            return node;
        }

        node->height = 1 + std::max(height(node->left), height(node->right));

        // Left left Case
        if (getBalance(node) < -1 && value < node->left->data) {
            return rightRotate(node);
        }

        // Right right case
        if (getBalance(node) > 1 && value > node->right->data) {
            return leftRotate(node);
        }

        // Left right case
        if (getBalance(node) < -1 && value > node->left->data) {
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }

        // Right left case
        if (getBalance(node) > 1 && value < node->left->data) {
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }
    
        return node;
    }

    void inorderRec(Node* node) {
        // TODO: Implement recursive inorder traversal
        if (node == nullptr) {
            return;
        }

        inorderRec(node->left);
        std::cout << node->data << " ";
        inorderRec(node->right);
    }

    void clearRec(Node* node) {
        // TODO: Implement recursive clear
        if (node == nullptr) {
            return;
        }

        clearRec(node->left);
        clearRec(node->right);

        delete node;
    }

public:
    AVLTree() : root(nullptr) {}

    ~AVLTree() {
        // TODO: Implement destructor
        clearRec(root);
    }

    void insert(int value) {
        // TODO: Implement insert
        root = insertRec(root, value);
    }

    void inorder() {
        // TODO: Implement inorder traversal
        inorderRec(root);
    }

    bool isBalanced() {
        // TODO: Implement balance check
        return getBalance(root) >= -1 && getBalance(root) <= 1;
    }
};

// Testing function - DO NOT MODIFY
void testTrees() {
    std::cout << "Testing Binary Search Tree:\n";
    BST bst;
    
    // Insert elements
    bst.insert(50);
    bst.insert(30);
    bst.insert(70);
    bst.insert(20);
    bst.insert(40);
    
    std::cout << "Inorder traversal: ";
    bst.inorder();
    
    std::cout << "Search 30: " << (bst.search(30) ? "Found" : "Not found") << std::endl;
    std::cout << "Search 90: " << (bst.search(90) ? "Found" : "Not found") << std::endl;
    
    bst.remove(30);
    std::cout << "After removing 30, inorder traversal: ";
    bst.inorder();

    std::cout << "\nTesting AVL Tree:\n";
    AVLTree avl;
    
    // Insert elements that would cause rotations
    avl.insert(10);
    avl.insert(20);
    avl.insert(30);
    avl.insert(40);
    avl.insert(50);
    
    std::cout << "Inorder traversal: ";
    avl.inorder();
    
    std::cout << "Is tree balanced? " << (avl.isBalanced() ? "Yes" : "No") << std::endl;
}

int main() {
    testTrees();
    return 0;
}
