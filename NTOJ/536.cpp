#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    int a,b,c,d; cin >> a >> b >> c >> d;
    if((a <= c && c <= b) || (a <= d && d <= b) || (c <= a && b <= d)) cout << "yes\n";
    else cout << "no\n";
    
}