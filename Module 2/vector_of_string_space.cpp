#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> names(n);

    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        getline(cin, names[i]);
    }

    for (string s : names)
    {
        cout << s << endl;
    }
    return 0;
}