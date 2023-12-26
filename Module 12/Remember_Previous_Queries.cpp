#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    list<int> myList;

    int x, v;
    while (q--)
    {
        cin >> x >> v;
        if (x == 0)
        {
            myList.push_front(v);
        }
        else if (x == 1)
        {
            myList.push_back(v);
        }
        else if (x == 2)
        {
            if (v < myList.size())
            {
                myList.erase(next(myList.begin(), v));
            }
        }

        cout << "L -> ";
        for (int val : myList)
        {
            cout << val << " ";
        }
        cout << endl;

        myList.reverse();
        cout << "R -> ";
        for (int val : myList)
        {
            cout << val << " ";
        }
        cout << endl;

        myList.reverse();
    }
    return 0;
}