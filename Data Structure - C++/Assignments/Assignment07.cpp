// Write a C++ program to determine whether a given Binary Tree is a Binary Search Tree (BST) or not.

#include<iostream>
using namespace std ;
class node{
    public:
        int data;
        node *left;
        node *right;
        node(int item){
            data=item;
            left=right=NULL;
        }
};
int pre= -999;
bool isset(node *root) {
    if(root==NULL){
        return true;
    }
    if(!isset(root->left)) {
        return false;
    }
    if (root->data <= pre) {
        return false;
    }
    pre=root->data;
    if (isset(root->right) == false) {
        return false;
    }
    return true;
}
int main(){
    node* root = new node(5);
    root->left = new node(2);
    root->right = new node(7);
    root->left->left = new node(1);
    root->left->right = new node(9);
    if (isset(root))
        cout << " is BST";
    else
        cout << "isn't BST";
}