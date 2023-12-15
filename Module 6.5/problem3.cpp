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

void input_linkelist(Node *&head, int v)
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

void middle_element(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    if (pos % 2 == 0)
    {
        cout << tmp->next->val << endl;
        // cout << pos;
    }
    else
    {
        cout << tmp->val << " " << tmp->next->val << endl;
    }
}

int main()
{
    Node *head = NULL;
    int v;
    int size = 0;
    while (true)
    {
        cin >> v;
        if (v == -1)
            break;
        else
        {
            input_linkelist(head, v);
            size++;
        }
    }
    int pos = size / 2;
    middle_element(head, pos);
    return 0;
}