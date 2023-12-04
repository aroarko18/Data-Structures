#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    vector<int> B(n);
    vector<int> C;

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        C.push_back(A[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> B[i];
        C.push_back(B[i]);
    }

    B.insert(B.end(), A.begin(), A.end());
    for (int v : B)
    {
        cout << v << " ";
    }
    return 0;
}