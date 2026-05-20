// Write a C++ program to create a Doubly Linked List of "n" nodes and display it in reverse order.

#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

node *createNode(int value)
{
    node *newNode = new node;
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;

    return newNode;
}

void insert(node *&head, int value)
{
    node *newNode = createNode(value);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void displayReverse(node *head)
{
    if (head == NULL)
    {
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->prev;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    int n, value;
    cout << "Enter number of nodes : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        insert(head, value);
    }
    cout << "Reverse Order : " << endl;
    displayReverse(head);
    return 0;
}