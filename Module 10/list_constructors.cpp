#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> myList;
    // list<int> myList2(10);
    // list<int> myList(10, 5);

    // list<int> myList2 = {1, 2, 3, 4, 5};
    // list<int> myList(myList2);

    // int a[5] = {1, 2, 4, 5, 6};
    // list<int> myList(a, a + 5);
    vector<int> v = {1, 2, 3, 4, 5, 6};
    list<int> myList(v.begin(), v.end());

    // cout << myList.front() << endl;
    // for (auto it = myList.begin(); it != myList.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    for (int val : myList)
    {
        cout << val << endl;
    }
    return 0;
}