#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
signed main(void)
{
    int n; cin >> n;
    int t = (n/2) + 1;
    cout << (n % 2 ? t * t + t : t * t) << endl;
}