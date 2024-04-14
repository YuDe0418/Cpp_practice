#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long


signed main(void)
{
    int n; cin >> n;
    if(n%9) cout << (n/9 + 1)* 9 << endl;
    else if(!(n%9)) cout << n+9 << endl;
}