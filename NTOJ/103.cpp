<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    string s[4];
    int ans=0;
    for(int i=0;i<4;i++) cin >> s[i];
    if(s[0] == s[2]) ans++;
    if(s[1] == s[3]) ans++;
    if(ans == 2) cout << "GOOD\n";
    else if(ans == 1) cout << "=~=\n";
    else cout << "OTZ\n";
=======
#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    string s[4];
    int ans=0;
    for(int i=0;i<4;i++) cin >> s[i];
    if(s[0] == s[2]) ans++;
    if(s[1] == s[3]) ans++;
    if(ans == 2) cout << "GOOD\n";
    else if(ans == 1) cout << "=~=\n";
    else cout << "OTZ\n";
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
}