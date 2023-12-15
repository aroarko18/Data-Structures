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

void sort_check(Node *head)
{
    int flag = 1;
    Node *tmp1 = head;
    Node *tmp2 = tmp1->next;

    while (tmp2 != NULL)
    {
        if (tmp1->val > tmp2->val)
        {
            flag = 0;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
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
            insert_at_tail(head, v);
        }
    }
    sort_check(head);
    return 0;
}