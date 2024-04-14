#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define yn(x)  (x ? "Yes" : "No") 
#define YN(x)  (x ? "YES" : "NO")
#define cin(n) int n; cin >> n;

signed main(void)
{
    int n,c; cin >> n >> c;
    int x[n];
    for(int i=0;i<n;i++)
    {
        cin >> x[i];
    }
    sort(x,x+n);
    int sum=0,t;
    for(int i=0;i<n;i++)
    {
        sum +=x[i];
        if(sum <= c) t++;
        else break;
    }
    cout << t << endl;
}