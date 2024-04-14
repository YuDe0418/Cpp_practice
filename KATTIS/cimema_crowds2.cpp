#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++)


signed main(void){
    int N,M; cin >> N >> M;
    int X[M];
    
    int sum=0;
    FOR(i,0,M){
        cin >> X[i];
        sum += X[i];
        
        if (sum == N) {
            cout << M-(i+1) << '\n';
            break;
        }
        else if (sum > N) {
            cout << M-i << '\n';
            break;
        }
    }
    
}
