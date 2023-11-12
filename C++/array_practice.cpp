#include <bits/stdc++.h>
using namespace std;
#define YuDe ios::sync_with_stdio; cin.tie(0); cout.tie(0)
#define FOR(i,a,b) for(int i = a; i<b; i++)

int main(){
    YuDe;
    int n; 
    cin >> n;
    string X[n]; 
    bool same[n];
    int remove = 0;
    
    FOR(i, 0, n) cin >> X[i];
    
    FOR(i,0,n){
        bool check = true;
        FOR(j,0,10){
            if(X[i][j] == '.') {
                check = false;
                break;
            }
        }

        if(check){
            remove++;
            same[i] = 1;
        }
        else same[i] = 0;
    }
    
    cout << "remove " << remove << " rows.\n";

    FOR(i,0,remove) cout << "..........\n";

    FOR(i,0,n){
        if(same[i] == 0) cout << X[i] << '\n';
    }
    
    return 0;
}