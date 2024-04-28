<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define YuDe ios::sync_with_stdio,cin.tie(0),cout.tie(0)
#define ll long long

int main(){
    YuDe;
    ll n,k1,k2,k3; cin >> n >> k1 >> k2 >> k3;
    ll free=0;
    free = k1/3 + k2/3 + k3/3;
    ll fee;
    fee = n*((k1+k2+k3)- free);
    cout << fee;
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;
#define YuDe ios::sync_with_stdio,cin.tie(0),cout.tie(0)
#define ll long long

int main(){
    YuDe;
    ll n,k1,k2,k3; cin >> n >> k1 >> k2 >> k3;
    ll free=0;
    free = k1/3 + k2/3 + k3/3;
    ll fee;
    fee = n*((k1+k2+k3)- free);
    cout << fee;
    return 0;
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
}