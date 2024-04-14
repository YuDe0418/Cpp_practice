#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

signed main(void)
{   
    IO
    int a,b,n;
    cin >> a >> b >> n;
    int inp,anum,bnum,ans=0;
    FOR(i,0,n)
    {
        anum=0,bnum=0;
        cin >> inp;
        while(inp != 0)
        {
            if(inp == a) anum++;
            else if(inp == -a) anum--;
            else if(inp == b) bnum++;
            else if(inp == -b) bnum--;
            cin >> inp;
        }
        if(anum >=1 && bnum >=1) ans++;
    }
    cout << ans << endl;
} 

