#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void sort_ascending(Node *head)
{
    Node *tmp1 = head;
    Node *tmp2 = tmp1->next;
    while (tmp1 != NULL && tmp2 != NULL)
    {
        if (tmp1->val > tmp2->val)
        {
            swap(tmp1->val, tmp2->val);
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
}

void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
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
            break;
        else
        {
            insert_at_tail(head, tail, v);
        }
    }
    sort_ascending(head);
    print_normal(head);
    return 0;
}