<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
signed main(void)
{
    int n,p,x,y; cin >> n >> p >> x >> y;
    int m = 0,ans = 0,i = 0;
    while(1)
    {
        i++;
        if((i%n) == 0)
        {
            ans += y;
            continue;
        }
        m++;
        ans+=x;
        if(m == p)
        {
            if(((i+1) % n) == 0)
            {
                ans += y;
            }
            break;
        }
    } 
    cout << ans << endl;
=======
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
signed main(void)
{
    int n,p,x,y; cin >> n >> p >> x >> y;
    int m = 0,ans = 0,i = 0;
    while(1)
    {
        i++;
        if((i%n) == 0)
        {
            ans += y;
            continue;
        }
        m++;
        ans+=x;
        if(m == p)
        {
            if(((i+1) % n) == 0)
            {
                ans += y;
            }
            break;
        }
    } 
    cout << ans << endl;
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
}