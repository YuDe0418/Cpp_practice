#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    int n,ans,cs=1; cin >> n;
    int a,b;
    for(int i=0;i<n;i++)
    {
        ans=0;
        cin >> a >> b;
        if(a%2==1)
        {
            for(int j=a;j<=b;j+=2)
            {
                ans += j;
            }
        }
        else
        {
             for(int j=a+1;j<=b;j+=2)
            {
                ans += j;
            }
        }
        cout << "Case " << cs << ": " << ans << "\n";
        cs++;
    }
}