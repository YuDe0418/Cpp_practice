#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    int n,mx=INT_MIN,tmp; cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> tmp;
        if(tmp > mx) mx=tmp;
    }
    cout << mx << "\n";

}