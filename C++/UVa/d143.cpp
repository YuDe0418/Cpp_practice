#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++) 

signed main(void)
{
	int n; cin >> n;
    int a,b;
    FOR(i,0,n)
    {
        cin >> a >> b;
        if(a>b) cout << ">" << endl;
        else if(a<b) cout << "<" << endl;
        else cout << "=" << endl;
    }

}
