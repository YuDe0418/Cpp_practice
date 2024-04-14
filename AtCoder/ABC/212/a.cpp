#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define yn(x)  (x ? "Yes" : "No") 
#define YN(x)  (x ? "YES" : "NO")

signed main(void)
{
    int a,b; cin >> a >> b;
    if(a>0 && b == 0) cout << "Gold" << endl;
    else if(a == 0 && b>0) cout << "Silver" << endl;
    else cout << "Alloy" << endl;
    
}