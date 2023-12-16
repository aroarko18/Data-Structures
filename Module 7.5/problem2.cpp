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

void insert_at_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}

void reverse_print(Node *n)
{
    if (n == NULL)
    {
        return;
    }
    reverse_print(n->next);
    cout << n->val << " ";
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int v;
    while (true)
    {
        cin >> v;
        if (v == -1)
        {
            break;
        }
        else
        {
            insert_at_tail(head, tail, v);
        }
    }
    reverse_print(head);
    return 0;
}