#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define all(x) x.begin(),x.end()


signed main(void)
{
    IO
    int n;    
    while(cin >> n)
    {
        if(n==0)break;
        vector<int> a(n), b(n), na(n), mp(20010);
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            na[i] = a[i];
        }
        for(int i=0;i<n;i++) cin >> b[i];
        sort(all(na));
        sort(all(b));
        for (int i=0;i<n;i++)
        {
            if (na[i] < 0) mp[10000-na[i]] = b[i];
            else mp[na[i]] = b[i];
        }
        for (int i=0;i<n;i++)
        {
            if (a[i] < 0) cout << mp[10000-a[i]] << endl;
            else cout << mp[a[i]] << endl;
        }
        cout << endl;

    }
}