#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

signed main(void)
{
    int n; cin >> n;
    cout << (n % 100 ? n/100 + 1 : n/100) << endl;
}