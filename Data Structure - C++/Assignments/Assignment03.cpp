// Write a C++ program to concatenate three linked lists.

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

Node *concatenateThreeLists(Node *head1, Node *head2, Node *head3)
{
    if (head1 == NULL)
    {
        if (head2 == NULL)
            return head3;
        Node *temp2 = head2;
        while (temp2->next != NULL)
        {
            temp2 = temp2->next;
        }
        temp2->next = head3;
        return head2;
    }

    Node *temp1 = head1;
    while (temp1->next != NULL)
    {
        temp1 = temp1->next;
    }

    if (head2 != NULL)
    {
        temp1->next = head2;
        Node *temp2 = head2;
        while (temp2->next != NULL)
        {
            temp2 = temp2->next;
        }
        temp2->next = head3;
    }
    else
    {
        temp1->next = head3;
    }

    return head1;
}

int main()
{
    Node *list1 = NULL;
    Node *list2 = NULL;
    Node *list3 = NULL;

    insertAtTail(list1, 1);
    insertAtTail(list1, 2);
    insertAtTail(list1, 3);
    insertAtTail(list2, 4);
    insertAtTail(list2, 5);
    insertAtTail(list3, 6);
    insertAtTail(list3, 7);
    insertAtTail(list3, 8);

    Node *concatenatedHead = concatenateThreeLists(list1, list2, list3);
    display(concatenatedHead);

    return 0;
}