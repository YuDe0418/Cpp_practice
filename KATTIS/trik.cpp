<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i,n) for(int i=0;i<n;i++)

const int cup_n = 3;
const int change[cup_n][2] = {{0,1},{1,2},{0,2}};
bool cup[cup_n] = {true};

signed main(void)
{
    IO
    string s; cin >> s;
    FOR(i,s.size())
    {
        int t = s[i] - 'A';
        swap(cup[change[t][0]] , cup[change[t][1]]);
    }
    FOR(i,3)
    {
        if(cup[i]) cout << i+1 << "\n";
    }
=======
#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i,n) for(int i=0;i<n;i++)

const int cup_n = 3;
const int change[cup_n][2] = {{0,1},{1,2},{0,2}};
bool cup[cup_n] = {true};

signed main(void)
{
    IO
    string s; cin >> s;
    FOR(i,s.size())
    {
        int t = s[i] - 'A';
        swap(cup[change[t][0]] , cup[change[t][1]]);
    }
    FOR(i,3)
    {
        if(cup[i]) cout << i+1 << "\n";
    }
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
}