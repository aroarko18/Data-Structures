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
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void difference_finder(Node *head)
{
    int max = INT_MIN;
    int min = INT_MAX;
    for (Node *i = head; i != NULL; i = i->next)
    {
        if (i->val > max)
        {
            max = i->val;
        }
        if (i->val < min)
        {
            min = i->val;
        }
    }
    int difference = max - min;
    cout << difference << endl;
}

int main()
{
    // Write your code here
    Node *head = NULL;
    Node *tail = NULL;
    int v;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;
        else
        {
            insert_at_tail(head, tail, v);
        }
    }
    difference_finder(head);

    return 0;
}
