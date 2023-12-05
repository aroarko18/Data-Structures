#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b;
        for (int i = 0; i < n; i++)
        {
            b.push_back(a[i]);
        }
        sort(b.begin(), b.begin() + n);

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (b[i] != a[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}