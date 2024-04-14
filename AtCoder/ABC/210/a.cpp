#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define yn(x)  (x ? "Yes" : "No") 
#define YN(x)  (x ? "YES" : "NO")

signed main(void)
{
    int n,a,x,y; cin >> n >> a >> x >> y;
    cout << (n <= a ? n*x : (a*x + (n-a)*y)) << endl;    
    
}