#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define yn(x)  (x ? "Yes" : "No") 
#define YN(x)  (x ? "YES" : "NO")
#define cin(n) int n; cin >> n;

signed main(void)
{
    int x,y; cin >> x >> y;
    if(x>0 && y>0) cout << 1 << endl;
    else if(x<0 && y>0) cout << 2 << endl;
    else if(x<0 && y<0) cout << 3 << endl;
    else cout << 4 << endl;
    

}