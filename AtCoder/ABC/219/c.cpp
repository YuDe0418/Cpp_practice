#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define int long long

const ll md = 1e9+7;

int val[30];
string a[50005];

bool cmp(string a, string b){
    for(int i=0;i<min(a.size(),b.size());i++)
    {
        if(a[i]==b[i]) continue;
        return val[a[i]-'a'] < val[b[i]-'a'];
    }
    return a.size() < b.size();
}

signed main(void)
{
    IO
    string s; cin >> s;
    for(int i=0;i<26;i++) val[s[i]-'a'] = i;
    int n; cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
    sort(a,a+n+1,cmp);
    for(int i=1;i<=n;i++) cout << a[i] << endl;

}