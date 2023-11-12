#include<bits/stdc++.h>
using namespace std;
#define YuDe ios::sync_with_stdio; cin.tie(0); cout.tie(0)
#define FOR(i,n) for(int i = 0; i < n; ++i)

int a1,b1,c1,a2,b2,c2,n;
int main(){
    cin>>a1>>b1>>c1>>a2>>b2>>c2>>n;
    int ans=-1;
    FOR(x1,n){
    	int x2=n-x1;
    	ans=max(ans,a1*x1*x1+b1*x1+c1+a2*x2*x2+b2*x2+c2);
    }
    cout<<ans;
}