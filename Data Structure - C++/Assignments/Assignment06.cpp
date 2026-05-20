// Write a C++ program to print paths from root to all leaf nodes in a Binary Tree.

#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *left;
    node *right;
    node(int item) {
        data = item;
        left = right = NULL;
    }
};

int path[100]; 
int pathLen = 0;

void printPaths(node* root) {
    if (root == NULL) return;

    path[pathLen++] = root->data;

    if (root->left == NULL && root->right == NULL) {
        for (int i = 0; i < pathLen; i++) {
            cout << path[i] << " ";
        }
        cout << endl;
    } else {
        printPaths(root->left);
        printPaths(root->right);
    }

    pathLen--;
}

int main() {
    node* root = new node(5);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(1);
    root->left->right = new node(4);
    root->left->right->left = new node(6);
    root->left->right->right = new node(8);

    printPaths(root);
    return 0;
}