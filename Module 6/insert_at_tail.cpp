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

void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void print_linkedList(Node *head)
{
    cout << "Your Linked List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = NULL;
    int op;
    cout << "Option 1: Insert at Tail" << endl;

    cout << endl
         << endl
         << "Select your option: ";
    cin >> op;
    if (op == 1)
    {
        cout << "Enter your value: ";
        int val;
        cin >> val;
        insert_at_tail(head, val);
    }

    print_linkedList(head);
    return 0;
}