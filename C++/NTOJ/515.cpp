#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

signed main(void)
{
    IO
    string s; cin >> s;
    if(s.size() == 4)  cout << (s[0] == s[1] && s[1] == s[2] &&s[2] == s[3] ? "GREAT!!" : "OAQ") << endl;
    else cout << "OAQ" << endl;
}