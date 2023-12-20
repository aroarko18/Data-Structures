#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList1 = {1, 2, 3, 4, 5, 6, 5, 8, 9, 5};
    list<int> myList2 = {10, 20, 30};
    // list<int> myList2;
    // myList2 = myList1;
    // myList2.assign(myList1.begin(), myList1.end());
    myList1.push_back(10);
    myList1.push_front(0);
    myList1.pop_back();
    myList1.pop_front();

    // myList1.insert(next(myList1.begin(), 2), myList2.begin(), myList2.end());
    // myList1.erase(next(myList1.begin(), 2));
    // myList1.erase(next(myList1.begin(), 2), next(myList1.begin(), 6));

    replace(myList1.begin(), myList1.end(), 5, 0);

    for (int val : myList1)
    {
        cout << val << endl;
    }

    // auto it = find(myList1.begin(), myList1.end(), 5);
    // if (it == myList1.end())
    // {
    // cout << "Not Found" << endl;
    // }
    // else
    // {
    //     cout << *it << endl;
    // }
    return 0;
}