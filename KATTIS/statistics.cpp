<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)

signed main(void)
{
	int n,x,cs=1;
    int mn,mx,rg;
    vector<int>v;
    while(cin >> n)
    {
        FOR(i,0,n)
        {
            cin >> x;
            v.emplace_back(x);
        }
        sort(v.begin(),v.end());
        mn = v[0];
        mx = v[v.size() - 1];
        rg = mx - mn;
        cout << "Case " << cs << ": " << mn << " " << mx << " " << rg << endl;
        cs++;
        v.clear();
    }
}
=======
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)

signed main(void)
{
	int n,x,cs=1;
    int mn,mx,rg;
    vector<int>v;
    while(cin >> n)
    {
        FOR(i,0,n)
        {
            cin >> x;
            v.emplace_back(x);
        }
        sort(v.begin(),v.end());
        mn = v[0];
        mx = v[v.size() - 1];
        rg = mx - mn;
        cout << "Case " << cs << ": " << mn << " " << mx << " " << rg << endl;
        cs++;
        v.clear();
    }
}
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
