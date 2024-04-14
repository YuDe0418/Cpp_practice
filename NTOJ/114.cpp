#include <bits/stdc++.h>
using namespace std;
#define FOR(i,n) for(int i=0;i<n;i++)
#define DFOR(r,c) FOR(i,r) FOR(j,c)

signed main(void)
{
    int a[5][6];
    DFOR(5,6) cin >> a[i][j];
    bool same = false;
    FOR(i,3)
    {
        FOR(j,4)
        {
            if(a[i][j] == a[i][j+1] && a[i][j+1] == a[i][j+2])
            {
                same = true;
                break;
            }
            if(a[i][j] == a[i+1][j] && a[i+1][j] == a[i+2][j])
            {
                same = true;
                break;
            }
        }
    }
    if(same) cout << "Yes\n";
    else cout << "No\n";
}