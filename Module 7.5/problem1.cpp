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

// int size(Node *head)
// {
//     Node *tmp = head;
//     int count = 0;
//     while (tmp != NULL)
//     {
//         count++;
//         tmp = tmp->next;
//     }
//     return count;
// }

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int size1 = 0;
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
            size1++;
        }
    }

    int size2 = 0;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;
        else
        {
            insert_at_tail(head, tail, v);
            size2++;
        }
    }

    if (size1 == size2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}