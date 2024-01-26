#include<bits/stdc++.h>
using namespace std;
queue<tuple<int,int,int>>q;
int dis[30][30][30],dx[6]={1,-1,0,0,0,0},dy[6]={0,0,1,-1,0,0},dz[6]={0,0,0,0,1,-1};
char m[30][30][30];
tuple<int,int,int>e;
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int a,b,c;
    while(cin>>a>>b>>c&&a){
        for(int i=0;i<a;i++)for(int j=0;j<b;j++)for(int k=0;k<c;k++){
            cin>>m[i][j][k];
            dis[i][j][k]=1e9;
            if(m[i][j][k]=='S'){
                dis[i][j][k]=0;
                q.push({i,j,k});
            }else if(m[i][j][k]=='E')e={i,j,k};
        }
        while(!q.empty()){
            auto [x,y,z]=q.front();
            q.pop();
            for(int i=0;i<6;i++){
                if(x+dx[i]>=0&&x+dx[i]<a
                &&y+dy[i]>=0&&y+dy[i]<b
                &&z+dz[i]>=0&&z+dz[i]<c
                &&m[x+dx[i]][y+dy[i]][z+dz[i]]!='#'
                &&dis[x+dx[i]][y+dy[i]][z+dz[i]]>dis[x][y][z]+1){
                    dis[x+dx[i]][y+dy[i]][z+dz[i]]=dis[x][y][z]+1;
                    q.push({x+dx[i],y+dy[i],z+dz[i]});
                }
            }
        }
        if([](){auto [x,y,z]=e;return dis[x][y][z]==1e9;}())cout<<"Trapped!\n";
        else cout<<"Escaped in "<<[](){auto [x,y,z]=e;return dis[x][y][z];}()<<" minute(s).\n";
    }
}