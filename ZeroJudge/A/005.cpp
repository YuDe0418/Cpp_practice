<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    int n,num[4]; cin >> n;
    while(n--)
    {
        for(int i=0;i<4;i++) cin >> num[i];
        for(int i=0;i<4;i++) cout << num[i] << " ";
        cout << (num[1]-num[0]==num[2]-num[1]&&num[1]-num[0]==num[3]-num[2] ? num[3]+num[3]-num[2] : num[3]*num[3]/num[2]) << "\n";
    }
    
}
=======
#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    int n,num[4]; cin >> n;
    while(n--)
    {
        for(int i=0;i<4;i++) cin >> num[i];
        for(int i=0;i<4;i++) cout << num[i] << " ";
        cout << (num[1]-num[0]==num[2]-num[1]&&num[1]-num[0]==num[3]-num[2] ? num[3]+num[3]-num[2] : num[3]*num[3]/num[2]) << "\n";
    }
    
}
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
    