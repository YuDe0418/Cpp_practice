<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

signed main(void)
{
    IO
    vector<string> v;
    int ans=0;
    string s; cin >> s;
    sort(s.begin(),s.end());
    do
    {
        ans++;
        v.emplace_back(s);
        
    }while(next_permutation(s.begin(),s.end()));
    cout << ans << endl;
    for(auto i:v) cout << i << endl;
=======
#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

signed main(void)
{
    IO
    vector<string> v;
    int ans=0;
    string s; cin >> s;
    sort(s.begin(),s.end());
    do
    {
        ans++;
        v.emplace_back(s);
        
    }while(next_permutation(s.begin(),s.end()));
    cout << ans << endl;
    for(auto i:v) cout << i << endl;
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
}