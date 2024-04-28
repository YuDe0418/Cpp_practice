<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define ep emplace_back

signed main(void)
{
	int n; cin >> n;
    if(n%2 == 1) cout << "still running" << endl;
    else
    {
        int st,sp,ans=0;
        FOR(i,0,n/2)
        {
            cin >> st >> sp;
            ans += sp - st;
        }
        cout << ans << endl;
    }

}
=======
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define ep emplace_back

signed main(void)
{
	int n; cin >> n;
    if(n%2 == 1) cout << "still running" << endl;
    else
    {
        int st,sp,ans=0;
        FOR(i,0,n/2)
        {
            cin >> st >> sp;
            ans += sp - st;
        }
        cout << ans << endl;
    }

}
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
