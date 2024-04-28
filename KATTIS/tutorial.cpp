<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define all(x) x.begin(),x.end()
#define vt(v) vector<int>v
#define vtn(v,n) vector<int> v(n)
#define input(x) for(auto &i : x) cin >> i
#define pr(pr) pair<int,int>pr
#define vtp(vp) vector<pair<int,int>>vp
#define qu(q) queue<int>q
#define F first
#define S second
#define pb push_back
#define mb emplace_back
#define mp emplace
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define rFOR(i,n) for(int i=n;i>=0;i--)
#define seea(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define seev(v,n) for(int i=0;i<n;i++){int x; cin>>x; v.mb(x);}
#define sees(s,n) for(int i=0;i<n;i++){int x; cin>>x; s.insert(x);}
#define endl "\n"
#define Yn(x)  (x ? "Yes" : "No")
#define yn(x)  (x ? "yes" : "no")
#define YN(x)  (x ? "YES" : "NO")
#define tf(x)  (x ? "true" : "false")
#define xab(x,a,b) (x ? a : b)
#define read(n) int n; cin >> n
#define ct(n) cout << n << endl
#define rt0 return 0
#define ctn continue
#define bk break
#define int long long

const int mod = 1e9+7;


int fp(int x,int y)
{
    if(y == 0)return 1;
    if(y%2)return fp(x*x%mod,y/2)*x%mod;
    return fp(x*x%mod,y/2);
}

long long f(int n)
{
    if(n==0) return 1;
    else
    {
        return n*f(n-1);
    }
}

int p(int n)
{
    if(n==1) return 2;
    else return 2*p(n-1); 
}

signed main(void)
{
    IO
    int m,n,t; cin >> m >> n >> t;
    switch (t)
    {
        case 1:
        {
            if(n>=13) cout << "TLE" << endl;
            else cout << (f(n) <= m && f(n)>0 ? "AC" : "TLE") << endl;
            break;
        }
        case 2:
        {
            cout << (p(n) <= m && p(n)>0 ? "AC" : "TLE") << endl;
            break;
        }
        case 3:
        {
            cout << (fp(n,4) <= m && fp(n,4)>0 ? "AC" : "TLE") << endl;
            break;
        }
        case 4:
        {
            cout << (fp(n,3) <= m && fp(n,3)>0? "AC" : "TLE") << endl;
            break;
        }
        case 5:
        {
            cout << (fp(n,2) <= m && fp(n,2)>0? "AC" : "TLE") << endl;
            break;
        }
        case 6:
        {
            cout << ((m - (ld)log2(n)*n) >= 1e-8 && (ld)log2(n)*n>0 ? "AC" : "TLE") << endl;
            break;
        }
        case 7:
        {
            cout << (n <= m && n>0 ? "AC" : "TLE") << endl;
            break;
        }
    }
=======
#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define all(x) x.begin(),x.end()
#define vt(v) vector<int>v
#define vtn(v,n) vector<int> v(n)
#define input(x) for(auto &i : x) cin >> i
#define pr(pr) pair<int,int>pr
#define vtp(vp) vector<pair<int,int>>vp
#define qu(q) queue<int>q
#define F first
#define S second
#define pb push_back
#define mb emplace_back
#define mp emplace
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define rFOR(i,n) for(int i=n;i>=0;i--)
#define seea(a,n) for(int i=0;i<n;i++) cin>>a[i]
#define seev(v,n) for(int i=0;i<n;i++){int x; cin>>x; v.mb(x);}
#define sees(s,n) for(int i=0;i<n;i++){int x; cin>>x; s.insert(x);}
#define endl "\n"
#define Yn(x)  (x ? "Yes" : "No")
#define yn(x)  (x ? "yes" : "no")
#define YN(x)  (x ? "YES" : "NO")
#define tf(x)  (x ? "true" : "false")
#define xab(x,a,b) (x ? a : b)
#define read(n) int n; cin >> n
#define ct(n) cout << n << endl
#define rt0 return 0
#define ctn continue
#define bk break
#define int long long

const int mod = 1e9+7;


int fp(int x,int y)
{
    if(y == 0)return 1;
    if(y%2)return fp(x*x%mod,y/2)*x%mod;
    return fp(x*x%mod,y/2);
}

long long f(int n)
{
    if(n==0) return 1;
    else
    {
        return n*f(n-1);
    }
}

int p(int n)
{
    if(n==1) return 2;
    else return 2*p(n-1); 
}

signed main(void)
{
    IO
    int m,n,t; cin >> m >> n >> t;
    switch (t)
    {
        case 1:
        {
            if(n>=13) cout << "TLE" << endl;
            else cout << (f(n) <= m && f(n)>0 ? "AC" : "TLE") << endl;
            break;
        }
        case 2:
        {
            cout << (p(n) <= m && p(n)>0 ? "AC" : "TLE") << endl;
            break;
        }
        case 3:
        {
            cout << (fp(n,4) <= m && fp(n,4)>0 ? "AC" : "TLE") << endl;
            break;
        }
        case 4:
        {
            cout << (fp(n,3) <= m && fp(n,3)>0? "AC" : "TLE") << endl;
            break;
        }
        case 5:
        {
            cout << (fp(n,2) <= m && fp(n,2)>0? "AC" : "TLE") << endl;
            break;
        }
        case 6:
        {
            cout << ((m - (ld)log2(n)*n) >= 1e-8 && (ld)log2(n)*n>0 ? "AC" : "TLE") << endl;
            break;
        }
        case 7:
        {
            cout << (n <= m && n>0 ? "AC" : "TLE") << endl;
            break;
        }
    }
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
}