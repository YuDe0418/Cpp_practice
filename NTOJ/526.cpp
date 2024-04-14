#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long

signed main(void)
{
    int a , re = 0 , b; cin >> a;
    while(a != 0)
    {
        b = a % 10;
        re = re * 10 + b;
        a /= 10;
    }
    cout << re << endl;

}