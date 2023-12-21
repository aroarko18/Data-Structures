#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 40, 50, 44, 11, 22, 333, 100};
    cout << myList.back() << endl;
    cout << myList.front() << endl;

    cout << *next(myList.begin(), 4) << endl;
    return 0;
}