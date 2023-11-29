#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    // cout << v.max_size() << endl;
    v.push_back(10);
    v.push_back(20);
    v.push_back(39);
    v.push_back(40);
    cout << v.size() << endl;
    // v.clear();
    v.resize(2);
    cout << v.size() << endl;

    v.resize(7);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}