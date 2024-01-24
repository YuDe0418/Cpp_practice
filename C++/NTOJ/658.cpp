#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++) cout << v[i] << " ";
    cout << endl;
}