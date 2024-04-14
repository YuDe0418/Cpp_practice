#include<bits/stdc++.h>
using namespace std;
int a[10];
bool used[10];
//回朔
void bt(int x){
    if(x==4)
    {
        for(int i=0;i<4;i++)cout<<a[i]<<" \n"[i==3];
        return;
    }
    //123組成4位數
    for(int i=1;i<=3;i++)
    {
        a[x]=i;
        bt(x+1);
    }
    //12345組成四位數(無重複)
    /*for(int i=1;i<=5;i++){
        if(used[i])continue;
        a[x]=i,used[i]=1;
        bt(x+1);
        used[i]=0;
    }*/
}
int main(){
    bt(0);
}