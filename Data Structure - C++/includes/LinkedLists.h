#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

class Linkedlist
{
private:
    node *start;

public:
    Linkedlist()
    {
        start = NULL;
    }

    bool isEmpty()
    {
        return (start == NULL);
    }

    void AddAtFirst(int item)
    {
        node *NewNode = new node;
        NewNode->data = item;
        if (isEmpty())
        {
            NewNode->next = NULL;
        }
        else
        {
            NewNode->next = start;
        }
        start = NewNode;
    }

    void AddAtEnd(int item)
    {
        node *NewNode = new node;
        NewNode->data = item;
        NewNode->next = NULL;
        if (start == NULL)
        {
            start = NewNode;
        }
        else
        {
            node *temp = start;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = NewNode;
        }
    }

    void AddAtSpec(int item, int pos)
    {
        if (pos == 1)
        {
            AddAtFirst(item);
            return;
        }
        node *NewNode = new node;
        NewNode->data = item;
        NewNode->next = NULL;
        node *temp = start;
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        NewNode->next = temp->next;
        temp->next = NewNode;
    }

    void display()
    {
        node *temp = start;
        if (isEmpty())
        {
            cout << "List is empty" << endl;
            return;
        }
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int count()
    {
        node *temp = start;
        int counter = 0;
        while (temp != NULL)
        {
            counter++;
            temp = temp->next;
        }
        return counter;
    }

    bool search(int item)
    {
        node *temp = start;
        bool found = false;
        while (temp != NULL)
        {
            if (temp->data == item)
            {
                found = true;
            }
            temp = temp->next;
        }
        return found;
    }

    void Delete(int item)
    {
        if (isEmpty())
        {
            cout << "List is empty, No items to delete" << endl;
            return;
        }
        node *hold = start;
        if (start->data == item)
        {
            hold = start;
            start = start->next;
            delete hold;
            return;
        }
        node *temp = start;
        while (temp->next->next != NULL)
        {
            if (temp->next->data == item)
            {
                hold = temp->next;
                temp->next = hold->next;
                delete hold;
                return;
            }
            temp = temp->next;
        }
        if (temp->next->data == item)
        {
            hold = temp->next;
            delete hold;
            temp->next = NULL;
            return;
        }
        cout << "item " << item << " not found" << endl;
    }
};