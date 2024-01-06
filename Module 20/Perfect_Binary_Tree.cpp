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

bool perfect_checker(Node *root)
{
    if (root == NULL)
    {
        return false;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        if (p->left == NULL && p->right == NULL)
        {
            continue;
        }

        if (p->left == NULL || p->right == NULL)
        {
            return false;
        }

        q.push(p->left);
        q.push(p->right);
    }

    return true;
}

int main()
{
    Node *root = input_tree();

    if (perfect_checker(root))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
