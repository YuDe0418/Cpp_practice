<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

signed main(void)
{   
    IO
    int n; cin >> n;
    int h[101],ans=0;
    FOR(i,0,n) cin >> h[i];
    FOR(i,0,n)
    {
        if(h[i] == 0)
        {
            if(i == 0) ans += h[1];
            else if(i == n-1) ans +=h[n-2];
            else ans += min(h[i-1],h[i+1]);
        }
    }
    cout << ans << endl;
} 

=======
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

signed main(void)
{   
    IO
    int n; cin >> n;
    int h[101],ans=0;
    FOR(i,0,n) cin >> h[i];
    FOR(i,0,n)
    {
        if(h[i] == 0)
        {
            if(i == 0) ans += h[1];
            else if(i == n-1) ans +=h[n-2];
            else ans += min(h[i-1],h[i+1]);
        }
    }
    cout << ans << endl;
} 

>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
