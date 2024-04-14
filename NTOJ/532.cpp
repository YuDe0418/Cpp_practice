#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define yn(x)  (x ? "Yes" : "No") 
#define YN(x)  (x ? "YES" : "NO")
#define cin(n) int n; cin >> n;

signed main(void)
{
    int n;
    int lev2=0, lev3=0;
    while(cin >> n)
    {
        if((n%2) == 0) lev2++;
        if((n%3) == 0) lev3++;
    }
    cout << lev2 << " " << lev3 << endl;

}