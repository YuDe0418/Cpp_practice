<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++) 

signed main(void)
{
	int n; cin >> n;
    int h,ipt=0,ans=0;
    FOR(i,0,n)
    {
        cin >> h;
        if(h>ipt) ans++;
        ipt = h;
    }
    cout << ans << endl;

}
=======
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++) 

signed main(void)
{
	int n; cin >> n;
    int h,ipt=0,ans=0;
    FOR(i,0,n)
    {
        cin >> h;
        if(h>ipt) ans++;
        ipt = h;
    }
    cout << ans << endl;

}
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
