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

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;

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
            insert_at_tail(head1, tail1, v);
        }
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;
        else
        {
            insert_at_tail(head2, tail2, v);
        }
    }

    int flag = 1;

    if (size(head1) == size(head2))
    {
        Node *tmp1 = head1;
        Node *tmp2 = head2;
        while (tmp1 != NULL)
        {
            if (tmp1->val == tmp2->val)
            {
                tmp1 = tmp1->next;
                tmp2 = tmp2->next;
            }
            else
            {
                flag = 0;
                break;
            }
        }
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

    return 0;
}