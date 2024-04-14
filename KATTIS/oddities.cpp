#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

signed main(void)
{   
    IO
    int n; cin >> n;
    while(n--)
    {
        int a; cin >> a;
        cout << a << " is " << (a%2 ? "odd" : "even") << endl;
    }
} 

