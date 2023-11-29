#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> x = {10, 20, 30, 40, 50};
    x.erase(x.begin() + 1, x.end() - 1);
    for (int a : x)
    {
        cout << a << " ";
    }
    return 0;
}