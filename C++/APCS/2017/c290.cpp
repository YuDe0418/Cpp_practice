#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    string x; cin >> x;
    int ans = 0;
    for(int i=0;i<x.size();i++)
    {
        ans += (i%2==0 ? x[i] - '0' : '0' - x[i]);
    }
    cout << abs(ans) << "\n";
}