#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (auto it = A.end() - 1; it >= A.begin(); it--)
    {
        cout << *it << " ";
    }
    return 0;
}