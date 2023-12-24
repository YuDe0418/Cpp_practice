#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    int n,x[1001];
    while(cin >> n)
    {
        for(int i=0;i<n;i++) cin >> x[i];
        sort(x,x+n);
        for(int i=0;i<n;i++) cout << x[i] << " ";
        cout << "\n";
    }
}