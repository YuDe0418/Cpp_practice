#include<bits/stdc++.h>
using namespace std;
int n,a[15],ans[6];
bool use[15];
void bt(int x,int y){
    if(x==6){
        for(int i=0;i<6;i++)cout<<ans[i]<<" \n"[i==5];
        return;
    }
    for(int i=y;i<n;i++){
        if(!use[i]){
            use[i]=1;
            ans[x]=a[i];
            bt(x+1,i+1);
            use[i]=0;
        }
    }
}
int main(){
    cin>>n;
    while(1){
        for(int i=0;i<n;i++)cin>>a[i];
        bt(0,0);
        cin>>n;
        if(n)cout<<'\n';
        else break;
    }
}