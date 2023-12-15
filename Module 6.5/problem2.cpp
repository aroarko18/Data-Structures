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

void duplicate_check(Node *head)
{
    int flag = 0;
    Node *tmp_1 = head;
    while (tmp_1 != NULL)
    {
        Node *tmp_2 = tmp_1->next;
        while (tmp_2 != NULL)
        {
            if (tmp_1->val == tmp_2->val)
            {
                flag = 1;
                break;
            }
            tmp_2 = tmp_2->next;
        }
        tmp_1 = tmp_1->next;
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
    duplicate_check(head);

    return 0;
}