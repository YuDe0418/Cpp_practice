<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,n) for(int i=0;i<n;i++)
#define endl "\n"

signed main(void)
{
    int n,x; cin >> n;
    int mx = INT_MIN,mn = INT_MAX;
    FOR(i,n)
    {
        cin >> x;
        mx = max(mx, x);
        mn = min(mn, x);
    }
    cout << mx - mn << endl;

=======
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,n) for(int i=0;i<n;i++)
#define endl "\n"

signed main(void)
{
    int n,x; cin >> n;
    int mx = INT_MIN,mn = INT_MAX;
    FOR(i,n)
    {
        cin >> x;
        mx = max(mx, x);
        mn = min(mn, x);
    }
    cout << mx - mn << endl;

>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
}