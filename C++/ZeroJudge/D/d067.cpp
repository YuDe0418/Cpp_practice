#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define cin(n) int n; cin >> n;

signed main(void)
{
    IO
    cin(n)
    cout << ((!(n%4) && n%100) || !(n%400) ? "a leap year" : "a normal year") << endl;
}