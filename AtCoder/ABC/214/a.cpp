#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

signed main(void)
{
    int n; cin >> n;
    if(n <= 125) cout << 4 << endl;
    else if(n >= 126 && n <= 211) cout << 6 << endl;
    else cout << 8 << endl;
}