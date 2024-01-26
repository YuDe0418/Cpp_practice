#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    int x,y; cin >> x >> y;
    while(x)
    {
        //利用 and xor 和右移來實作二進位制運算
        int a = x&y, b = x^y;
        a<<=1;
        x=a,y=b;
        //cout << x << " " << y << '\n';
    }
    cout << y;
}