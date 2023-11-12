#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

signed main(void)
{
    IO
    int h,m; cin >> h >> m;
    cout << ((h*60+m >= 450 && h*60+m < 1020) ? "At School" : "Off School") << endl;
}