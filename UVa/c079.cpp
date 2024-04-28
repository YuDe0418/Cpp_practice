<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    int n,k,ans;
    while(cin >> n >> k)
    {
        ans = n;
        while(n/k)
        {
            ans += n/k;
            n = n/k + n%k;
        }
        cout << ans << "\n";
    }
}
    
=======
#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    int n,k,ans;
    while(cin >> n >> k)
    {
        ans = n;
        while(n/k)
        {
            ans += n/k;
            n = n/k + n%k;
        }
        cout << ans << "\n";
    }
}
    
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
