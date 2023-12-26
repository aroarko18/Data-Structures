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

void insert_at_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void check_palindrome(Node *head, Node *tail)
{
    int flag = 1;
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        if (i->val == j->val)
        {
            i = i->next;
            j = j->prev;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (i->val == j->val)
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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
    check_palindrome(head, tail);
    return 0;
}