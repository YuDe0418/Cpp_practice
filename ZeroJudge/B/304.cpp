<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define vt(v) vector<int>v;
#define pr(pr) pair<int,int>pr;
#define vtpr(vp) vector<pair<int,int>>vp;
#define qu(q) queue<int>q;;
#define F first
#define S second
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define endl "\n"
#define Yn(x)  (x ? "Yes" : "No")
#define yn(x)  (x ? "yes" : "no")
#define YN(x)  (x ? "YES" : "NO")
#define tf(x)  (x ? "true" : "false")
#define xab(x,a,b) (x ? a : b)
#define cin(n) int n; cin >> n;
#define ct(n) cout << n << endl;
#define rt0 return 0;
#define ctn continue;
#define bk break;
#define int long long


signed main(void)
{
    IO
    int n; cin >> n;cin.ignore();
    string s;
    while(n--)
    {
        getline(cin,s);
        if(s == " ") 
        {
            cout << "Yes" << endl;
            continue;
        }
        bool ans = true;
        stack<char>sk;
        FOR(i,0,s.size())
        {
            if(s[i] == '(' || s[i] == '[' || sk.empty()) sk.emplace(s[i]);
            else if(!sk.empty())
            {
                if((sk.top() == '(' && s[i] == ')') || (sk.top() == '[' && s[i] == ']')) sk.pop();
                else 
                {
                    ans = false;
                    break;
                }
            }
            else 
            {
                ans = false;
                break;
            }
        }
        if(!sk.empty()) ans = false;
        cout << Yn(ans) << endl;
    }
=======
#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define vt(v) vector<int>v;
#define pr(pr) pair<int,int>pr;
#define vtpr(vp) vector<pair<int,int>>vp;
#define qu(q) queue<int>q;;
#define F first
#define S second
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define endl "\n"
#define Yn(x)  (x ? "Yes" : "No")
#define yn(x)  (x ? "yes" : "no")
#define YN(x)  (x ? "YES" : "NO")
#define tf(x)  (x ? "true" : "false")
#define xab(x,a,b) (x ? a : b)
#define cin(n) int n; cin >> n;
#define ct(n) cout << n << endl;
#define rt0 return 0;
#define ctn continue;
#define bk break;
#define int long long


signed main(void)
{
    IO
    int n; cin >> n;cin.ignore();
    string s;
    while(n--)
    {
        getline(cin,s);
        if(s == " ") 
        {
            cout << "Yes" << endl;
            continue;
        }
        bool ans = true;
        stack<char>sk;
        FOR(i,0,s.size())
        {
            if(s[i] == '(' || s[i] == '[' || sk.empty()) sk.emplace(s[i]);
            else if(!sk.empty())
            {
                if((sk.top() == '(' && s[i] == ')') || (sk.top() == '[' && s[i] == ']')) sk.pop();
                else 
                {
                    ans = false;
                    break;
                }
            }
            else 
            {
                ans = false;
                break;
            }
        }
        if(!sk.empty()) ans = false;
        cout << Yn(ans) << endl;
    }
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
}