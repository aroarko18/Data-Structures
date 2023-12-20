#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30};
    // cout << myList.size() << endl;
    // cout << myList.max_size() << endl;
    myList.resize(2);
    cout << myList.size() << endl;
    myList.clear();
    myList.resize(5);

    for (int val : myList)
    {
        cout << val << " ";
    }
    return 0;
}