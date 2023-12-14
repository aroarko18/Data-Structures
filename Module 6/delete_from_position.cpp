#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << endl
             << "Inserted at Head using insert at tail" << endl
             << endl;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    cout << endl
         << endl
         << "Inserted at Tail successfully..." << endl
         << endl;
}

void print_linkedList(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;

    cout << endl
         << endl
         << "Inserted at Head successfully..." << endl
         << endl;
}

void insert_at_position(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);

    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;

    cout << endl
         << endl
         << "Inserted at" << pos << "successfully..." << endl
         << endl;
}

void delete_from_pos(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        int op;
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Insert at Head" << endl;
        cout << "Option 3: Insert at Position" << endl;
        cout << "Option 4: Delete Position" << endl;
        cout << "Option 5: Print Linked List" << endl;
        cout << "Option 6: Terminate" << endl;

        cin >> op;
        if (op == 1)
        {
            int val;
            cout << "Enter your value: ";
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (op == 2)
        {
            int val;
            cout << "Enter your value: ";
            cin >> val;
            insert_at_head(head, val);
        }
        else if (op == 3)
        {
            int val;
            int pos;
            cout << "Enter your position: ";
            cin >> pos;

            cout << "Enter your value: ";
            cin >> val;
            insert_at_position(head, pos, val);
        }
        else if (op == 4)
        {
            int pos;
            cout << "Enter your delete position: ";
            cin >> pos;
            delete_from_pos(head, pos);
        }
        else if (op == 5)
        {
            cout << "Your Linked List: ";
            print_linkedList(head);
        }
        else if (op == 6)
        {
            break;
        }
    }
    return 0;
}