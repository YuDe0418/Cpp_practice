<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

signed main(void)
{   
    IO
    int n; cin >> n;
    int a[8],b[8];
    while(n--)
    {
        
        FOR(i,1,8) cin >> a[i];
        FOR(i,1,8) cin >> b[i];
        string s="";
        if(a[2] == a[4] || a[2] != a[6] || b[2] == b[4] || b[2] != b[6]) s+="A";
        if(a[7] == 0 || b[7] == 1) s+="B";
        if(a[2] == b[2] || a[4] == b[4] || a[6] == b[6]) s+="C";
        cout << (s == "" ? "None" : s) << endl;
        
    }

} 

=======
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

signed main(void)
{   
    IO
    int n; cin >> n;
    int a[8],b[8];
    while(n--)
    {
        
        FOR(i,1,8) cin >> a[i];
        FOR(i,1,8) cin >> b[i];
        string s="";
        if(a[2] == a[4] || a[2] != a[6] || b[2] == b[4] || b[2] != b[6]) s+="A";
        if(a[7] == 0 || b[7] == 1) s+="B";
        if(a[2] == b[2] || a[4] == b[4] || a[6] == b[6]) s+="C";
        cout << (s == "" ? "None" : s) << endl;
        
    }

} 

>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
