#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> myAddress;
    string addresses;
    while (true)
    {
        cin >> addresses;
        if (addresses == "end")
            break;
        myAddress.push_back(addresses);
    }

    int q;
    auto curr_pos = myAddress.begin();
    cin >> q;
    while (q--)
    {
        string cmd, address;
        cin >> cmd;
        if (cmd == "visit")
        {
            cin >> address;
            auto it = find(myAddress.begin(), myAddress.end(), address);
            if (it != myAddress.end())
            {
                curr_pos = it;
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (cmd == "next")
        {
            curr_pos++;

            if (curr_pos != myAddress.end())
            {
                cout << *curr_pos << endl;
            }
            else
            {
                cout << "Not Available" << endl;
                curr_pos--;
            }
        }
        else if (cmd == "prev")
        {
            if (curr_pos != myAddress.begin())
            {
                curr_pos--;
                cout << *curr_pos << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
    }
    return 0;
}