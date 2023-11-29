#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v = {1, 2, 3, 4, 5, 6, 7, 2, 3, 2};
    // replace(v.begin(), v.end(), 2, 100);
    // for (int x : v)
    // {
    //     cout << x << " ";
    // }

    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 10};
    // vector<int>::iterator it;
    // it = find(v.begin(), v.end(), 100);

    auto it = find(v.begin(), v.end(), 10);
    if (it == v.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }
    return 0;
}