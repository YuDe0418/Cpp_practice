#include <bits/stdc++.h>
using namespace std;
#define FOR(i,n) for(int i=0;i<n;i++)

const int dx = {0,1,1,1,0,-1,-1,-1};
const int dy = {1,1,0,-1,-1,-1,0,1};
string s[10000];


signed main(void)
{
    int h,w; cin >> h >> w;
    for(int i=0;i<h;i++) cin >> s[i];
    for(int i=1;i<h+1;i++)
    {
        for(int k=1;k<w+1;k++)
        {
            if(s[i][k] == '#') cout << '#';
            else 
            {
                int cnt = 0;
                for(int j = 0; j < 8; ++j) 
                {
                    int cx = i + dx[j], cy = k + dy[j];

                    if(cx < 0 || cy < 0 || cx >= h || cy >= w) continue;
                    if(s[cx][cy] == '#') cnt++;
                }
                cout << cnt;
            }
        }
        cout << endl;
    }
}