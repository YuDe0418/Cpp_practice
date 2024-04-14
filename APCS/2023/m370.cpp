#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    int x,n;
    while(cin >> x >> n)
    {
        int f[n];
        for(int i=0;i<n;i++) cin >> f[i];
            
        sort(f,f+n);
        
        int l=0,r=0;
        for(int i=0;i<n;i++)
        {
            if(f[i]<x) l++; 
            else r++;
        }
        if(l > r) cout << l << " " << f[0] << "\n";
        else cout << r << " " << f[n-1] << "\n";
    }
}