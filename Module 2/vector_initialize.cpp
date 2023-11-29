#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v;  type 1
    // vector<int> v(5);    type 2
    // vector<int> v(5, 10);   type 3
    // vector<int> v1(5, 100);
    // vector<int> v(v1);   type 4

    vector<int> v = {10, 20, 30};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << v.size() << endl;
    return 0;
}