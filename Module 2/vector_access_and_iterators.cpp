#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50, 51, 52, 53};

    cout << v[v.size() - 1] << endl;
    cout << v.back() << endl;
    cout << v[0] << endl;
    cout << v.front() << endl;

    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}