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

int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }

    return count;
}

void middle_element(Node *head, int size)
{
    Node *tmp = head;
    for (int i = 1; i <= size; i++)
    {
        if (size % 2 == 1 && i == int(size / 2) + 1)
        {
            cout << tmp->val << endl;
        }
        else if (size % 2 == 0 && i == size / 2)
        {
            cout << tmp->val << " " << tmp->next->val << endl;
            break;
        }
        tmp = tmp->next;
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
        {
            break;
        }
        else
        {
            insert_at_tail(head, tail, v);
        }
    }

    middle_element(head, size(head));
    return 0;
}