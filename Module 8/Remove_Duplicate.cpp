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

void deleteNode(Node *&head, int v)
{
    Node *tmp2 = head;
    while (tmp2->next != NULL)
    {
        if (tmp2->next->val == v)
        {
            Node *delNode = tmp2->next;
            tmp2->next = delNode->next;
            delete delNode;
        }
        else
        {
            tmp2 = tmp2->next;
        }
    }
}

void print_linkedList(Node *head)
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
    // Write your code here
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

    Node *tmp = head;
    while (tmp != NULL)
    {
        deleteNode(tmp, tmp->val);
        tmp = tmp->next;
    }
    print_linkedList(head);

    return 0;
}
