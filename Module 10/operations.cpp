#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 10, 11, 33, 40};
    // myList.remove(10);
    // myList.sort();
    // myList.sort(greater<int>());
    // myList.unique();

    myList.reverse();
    for (int val : myList)
    {
        cout << val << " ";
    }
    return 0;
}