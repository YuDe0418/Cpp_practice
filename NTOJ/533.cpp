#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define Yn(x)  (x ? "Yes" : "No")
#define yn(x)  (x ? "yes" : "no")
#define YN(x)  (x ? "YES" : "NO")
#define cin(n) int n; cin >> n;

signed main(void)
{
    int a,b,n; cin >> a >> b >> n;
    cout << yn(n >= a && n <= b ) << endl;

}