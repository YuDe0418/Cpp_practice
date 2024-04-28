<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,n) for(int i=0;i<n;i++)
#define endl "\n"

signed main(void)
{
    int n,t,a; cin >> n >> t >> a;
    vector<pair<double,int>>v;
    int h;
    double avt;
    FOR(i,n)
    {
        cin >> h;
        avt = abs((t - h * 0.006) - a);
        v.emplace_back(avt, i + 1);
    }
    sort(v.begin(), v.end());  
    cout << v[0].second << endl;

=======
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,n) for(int i=0;i<n;i++)
#define endl "\n"

signed main(void)
{
    int n,t,a; cin >> n >> t >> a;
    vector<pair<double,int>>v;
    int h;
    double avt;
    FOR(i,n)
    {
        cin >> h;
        avt = abs((t - h * 0.006) - a);
        v.emplace_back(avt, i + 1);
    }
    sort(v.begin(), v.end());  
    cout << v[0].second << endl;

>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
}