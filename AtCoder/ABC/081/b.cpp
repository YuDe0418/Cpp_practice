#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)

signed main()
{
	int n; cin >> n;
    vector<int>v;
    bool ev = true;
    int cut = 0,x;
    FOR(i,0,n) 
    {
        cin >> x;
        v.emplace_back(x);
    }
    while(ev)
    {
        FOR(i,0,n)
        {
            if(v[i]%2==1) ev = false;
        }
        if(ev) 
        {
            FOR(i,0,n) v[i] /= 2; 
            cut++;
        }
        
    }
    cout << cut << endl;
}