#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    int n; cin >> n;
    char c,opt;
    for (int i=0;i<n;i++)
    {
        cin >> c;
        if(c >= 'A' && c <= 'Z')
        {
            opt = 'a' + (c - 'A');
            cout << opt;
        }
        else if(c >= 'a' && c <= 'z')
        {
            opt = 'A' + (c - 'a');
            cout << opt;
        }
    }
    cout << "\n";
}