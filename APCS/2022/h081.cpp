#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define FOR(i,a,b) for(int i=a;i<b;i++)

signed main(void)
{   
    IO
    int n,d; cin >> n >> d;
    int sellprc=0,nprc,have=0,profit=0; //sell 上次賣出價格 nprc 現在價格
    vector<int>v(101);
    FOR(i,0,n) cin >> v[i];

    nprc = v[0]; //一開始一定買
    have = 1; //有股票
    for(int i=1;i<n;i++)
    {
        if(have)
        {
            if(v[i] >= nprc + d) //賣出
            {
                profit += v[i] - nprc;
                sellprc = v[i];
                have = 0;
            }
           
        } 
        else if(v[i] <= sellprc - d)
            {
                have = 1;
                nprc = v[i];
            }
    }
    cout << profit << endl;

} 

