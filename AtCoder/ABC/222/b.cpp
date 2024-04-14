#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

signed main(void)
{   
    IO
    int n,p; cin >> n >> p;
    int f=0,ipt;
    for(int i=0;i<n;i++)
    {
        cin >> ipt;
        if(ipt < p) f++;
    }
    cout << f << endl;

} 

