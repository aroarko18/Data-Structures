#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left = NULL;
    Node *right = NULL;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;

    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }

    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;

        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void printLeft(Node *root)
{
    if (root->left)
    {
        printLeft(root->left);
        cout << root->left->val << " ";
    }
    else
    {
        if (root->right)
        {
            printLeft(root->right);
            cout << root->right->val << " ";
        }
    }
}

void printRight(Node *root)
{
    if (root->right)
    {
        cout << root->right->val << " ";
        printRight(root->right);
    }
    else
    {
        if (root->left)
        {
            cout << root->left->val << " ";
            printRight(root->left);
        }
    }
}

void print_outer(Node *root)
{

    if (root->left)
    {
        printLeft(root);
    }
    cout << root->val << " ";
    if (root->right)
    {
        printRight(root);
    }
}

int main()
{
    Node *root = input_tree();
    print_outer(root);
    return 0;
}