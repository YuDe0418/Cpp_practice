#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i = a; i<b; i++)

signed main(void){
    int n,m; cin >> n >> m;
    int ans=0;
    int a[n+1];
    FOR(i,1,n+1) cin >> a[i];
    int sum[n+1];
    sum[0] = 0;
    FOR(i,1,n+1){
        sum[i] = sum[i-1] + a[i];
    }
    
    FOR(i,1,n+1) 
    {
        for(int j=i;j<=n+1;j++)
        {
            if(sum[j] - sum[i-1] == m) ans++;
        }
    }
    cout << ans << "\n";
}