#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define yn(x)  (x ? "yes" : "no")

signed main(void)
{
    int a,b; cin >> a >> b;
    cout << yn(a%2 == b%2) << endl;

}