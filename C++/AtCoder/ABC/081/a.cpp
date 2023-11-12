#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define yn(x)  (x ? "Yes" : "No") 
#define YN(x)  (x ? "YES" : "NO")
#define cin(n) int n; cin >> n;

signed main(void)
{
    string s; cin >> s;
    int ans=0;
    for(int i=0;i<3;i++)
    {
        if(s[i] == '1')  ans++;
    }
    cout << ans << endl;
}