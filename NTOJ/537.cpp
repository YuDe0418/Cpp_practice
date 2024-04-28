<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define Yn(x)  (x ? "Yes" : "No")
#define yn(x)  (x ? "yes" : "no")
#define YN(x)  (x ? "YES" : "NO")
#define cin(n) int n; cin >> n;

signed main(void)
{
    int a,b,c; cin >> a >> b >> c;
    if(a>b) swap(a,b);
    if(b>c) swap(b,c);
    if(a>b) swap(a,b);
    cout << yn((a+b) > c) << endl;
=======
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define Yn(x)  (x ? "Yes" : "No")
#define yn(x)  (x ? "yes" : "no")
#define YN(x)  (x ? "YES" : "NO")
#define cin(n) int n; cin >> n;

signed main(void)
{
    int a,b,c; cin >> a >> b >> c;
    if(a>b) swap(a,b);
    if(b>c) swap(b,c);
    if(a>b) swap(a,b);
    cout << yn((a+b) > c) << endl;
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
}