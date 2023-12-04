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
    for (int v : A)
    {
        if (v > 0)
        {
            replace(A.begin(), A.end(), v, 1);
        }
        else if (v < 0)
        {
            replace(A.begin(), A.end(), v, 2);
        }
    }
    for (auto it = A.begin(); it < A.end(); it++)
    {
        if (it != A.end() - 1)
        {
            cout << *it << " ";
        }
        else
        {
            cout << *it << endl;
        }
    }
    return 0;
}