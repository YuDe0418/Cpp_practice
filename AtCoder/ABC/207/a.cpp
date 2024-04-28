<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define yn(x)  (x ? "Yes" : "No") 
#define YN(x)  (x ? "YES" : "NO")
#define cin(n) int n; cin >> n;

signed main(void)
{
    int a,b,c; cin >> a >> b >> c;
    if(a<b) swap(a,b);
    if(b<c) swap(b,c);
    if(a<b) swap(a,b);
    cout << a+b << endl;
=======
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define yn(x)  (x ? "Yes" : "No") 
#define YN(x)  (x ? "YES" : "NO")
#define cin(n) int n; cin >> n;

signed main(void)
{
    int a,b,c; cin >> a >> b >> c;
    if(a<b) swap(a,b);
    if(b<c) swap(b,c);
    if(a<b) swap(a,b);
    cout << a+b << endl;
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
}