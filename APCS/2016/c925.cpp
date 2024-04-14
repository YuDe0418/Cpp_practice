#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
signed main(void)
{   
    IO
    int n,m; cin >> n >> m;
    int sum=0,num;
    vector<int>pick,last;
    for(int i=0; i<n;i++)
    {
        int maxn = INT_MIN;

        for(int j=0;j<m;j++) 
        {    
            cin >> num;
            maxn = max(maxn,num);
        }

        pick.push_back(maxn);
        sum += maxn;
    }
    cout << sum << endl;
    for(int i=0; i<pick.size();i++) 
    {
        if(sum%pick[i] == 0) last.push_back(pick[i]);
    }
    if(last.empty()) cout << -1;
    else
    {
        cout << last[0];
        for(int i=1;i<last.size();i++) cout << " " << last[i];
    }
    cout << endl;
} 

