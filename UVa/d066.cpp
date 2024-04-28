<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,n) for(int i=0;i<n;i++)
#define endl "\n"

signed main(void)
{
    int t; cin >> t;
    int j,now,nx;
    int cs=1;
    while(t--)
    {
       cin >> j;
       j--;
       cin >> now;
       int hi=0,lo=0;
       while(j--)
       {
        cin >> nx;
        if(now > nx) lo++;
        if(now < nx) hi++;
        now = nx;
       } 
       cout << "Case " << cs << ": " << hi << " " << lo << endl;
       cs++; 
    }
    

=======
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,n) for(int i=0;i<n;i++)
#define endl "\n"

signed main(void)
{
    int t; cin >> t;
    int j,now,nx;
    int cs=1;
    while(t--)
    {
       cin >> j;
       j--;
       cin >> now;
       int hi=0,lo=0;
       while(j--)
       {
        cin >> nx;
        if(now > nx) lo++;
        if(now < nx) hi++;
        now = nx;
       } 
       cout << "Case " << cs << ": " << hi << " " << lo << endl;
       cs++; 
    }
    

>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
}