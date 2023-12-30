#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    queue<string> myQueue;

    while (q--)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            string name;
            cin >> name;
            myQueue.push(name);
        }
        else if (n == 1)
        {
            if (myQueue.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << myQueue.front() << endl;
                myQueue.pop();
            }
        }
    }
    return 0;
}
