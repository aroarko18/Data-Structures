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

int main()
{
    // Write your code here

    int t;
    cin >> t;
    while (t--)
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
        int x;
        cin >> x;
        bool flag = false;
        int pos = 0;
        Node *tmp = head;
        while (tmp != NULL)
        {
            if (x == tmp->val)
            {
                flag = true;
                break;
            }
            pos++;
            tmp = tmp->next;
        }
        if (flag == true)
        {
            cout << pos << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}
