#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)

signed main(void)
{
    int n,idx; cin >> n;
    string s;
    string a[10];
    while(n--)
    {
        cin >> s >> idx;
        a[idx-1] = s;
    }
    for(int i=0;i<10;i++)
    {
        if(a[i].empty()) cout << "EMPTY\n";
        else cout << a[i] << "\n";
    }
}
