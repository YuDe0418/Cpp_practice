<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=a; i<b;i++)
int main(){
    int n; cin >> n;
    int N[n];
    FOR(i,0,n){
        cin >> N[i];
    }
    sort(N,N+n);
    FOR(i,0,n){
        cout << N[i]<< ' ';
    }

=======
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for (int i=a; i<b;i++)
int main(){
    int n; cin >> n;
    int N[n];
    FOR(i,0,n){
        cin >> N[i];
    }
    sort(N,N+n);
    FOR(i,0,n){
        cout << N[i]<< ' ';
    }

>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
}