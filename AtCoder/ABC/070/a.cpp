#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define yn(x)  (x ? "Yes" : "No") 
#define YN(x)  (x ? "YES" : "NO")

signed main(void)
{
    int a,b,c,d; cin >> a >> b >> c >> d;
    int amx = max(a,c);
    int bmn = min(b,d);
    cout << max((bmn-amx),0) << endl;
    
}