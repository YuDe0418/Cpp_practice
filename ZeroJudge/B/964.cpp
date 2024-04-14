#include <bits/stdc++.h>
using namespace std;
#define YuDe ios::sync_with_stdio,cin.tie(0),cout.tie(0)
#define FOR(i,a,b) for(int i = a; i<b; i++)

int main(){
    YuDe;
    int n; cin >> n;
    int a[n];
    int maxfail = -1; int minpass = 101;
    
    FOR(i,0,n){ 
        cin >> a[i];
        if (a[i] > maxfail && a[i] < 60) maxfail = a[i];
        else if(a[i] < minpass && a[i] > 59) minpass = a[i];
    }        
    sort(a,a+n);
    FOR(i,0,n) cout << a[i] << ' ';
    cout << '\n';
    
    if (maxfail == -1) cout << "best case\n";
    else cout << maxfail << '\n';
    if (minpass == 101) cout << "worst case";
    else cout << minpass;
}

