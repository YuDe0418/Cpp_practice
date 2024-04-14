#include<bits/stdc++.h>
using namespace std;
queue<pair<int,int>>q;
int dis[8][8],dx[8]={1,2,2,1,-1,-2,-2,-1},dy[8]={2,1,-1,-2,-2,-1,1,2};

int main(){
    int ax,ay,bx,by;
    char c[4];
    while(cin>>c[0]>>c[1]>>c[2]>>c[3])
    {
        for(int i=0;i<8;i++)for(int j=0;j<8;j++)dis[i][j]=1e9;
        ax=c[0]-'a',ay=c[1]-'1',bx=c[2]-'a',by=c[3]-'1';
        dis[ax][ay]=0;
        q.push({ax,ay});
        while(!q.empty())
        {
            auto p=q.front();
            q.pop();
            for(int i=0;i<8;i++)
            {
                if(p.first+dx[i]>=0&&p.first+dx[i]<8
                &&p.second+dy[i]>=0&&p.second+dy[i]<8
                &&dis[p.first+dx[i]][p.second+dy[i]]>dis[p.first][p.second]+1)
                {
                    q.push({p.first+dx[i],p.second+dy[i]});
                    dis[p.first+dx[i]][p.second+dy[i]]=dis[p.first][p.second]+1;
                }
            }
        }
        cout<<"To get from "<<c[0]<<c[1]<<" to "<<c[2]<<c[3]<<" takes "<<dis[bx][by]<<" knight moves.\n";
    }
}