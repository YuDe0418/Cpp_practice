#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define yn(x)  (x ? "Yes" : "No") 
#define YN(x)  (x ? "YES" : "NO")
#define cin(n) int n; cin >> n;

signed main(void)
{
    string s1,s2;
    cin >> s1 >> s2;
    int n=0;
    for(int i=0;i<4;i++)
    {
        if(s1[i] != s2[i]) n++;
    }
    cout << pow(2,n) << endl;

}