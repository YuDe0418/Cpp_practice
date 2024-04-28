<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

char b[50][50];
int step_x[6] = {0,1,1,0,-1,-1};
int step_y[6] = {-1,0,1,1,0,-1};
string ans;
set<char> s;
int pre_x,pre_y,m,n;

bool in_range(int pre_x, int pre_y/*,int m,int n*/)
{
    return ((pre_x < n && pre_x >= 0) && (pre_y < m && pre_y >= 0));
}

signed main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int k; cin >> m >> n >> k;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> b[i][j];
        }
    }
    pre_x = 0,pre_y = m-1;
    int dir;
    for(int i=0;i<k;i++)
    {
        cin >> dir;
        
        if(!(in_range(pre_x + step_x[dir],pre_y + step_y[dir])))
        {
            ans += b[pre_y][pre_x];
            s.insert(b[pre_y][pre_x]);
        }
        else
        {
            pre_y += step_y[dir];
            pre_x += step_x[dir];
            ans += b[pre_y][pre_x];
            s.insert(b[pre_y][pre_x]);
        }
    }
    /*int cnt = 0;
    bool same;
    for(int i=0;i<=k;i++)
    {
        same = false;
        for(int j=0;j<=k;j++)
        {
            if(i == j) continue;
            else
            {
                if(ans[j] == ans[i]) same = true;
            }
        }
        if(!same) cnt++;
    }*/
    

    cout << ans << "\n" << s.size()/*cnt*/ << "\n";

=======
#include <bits/stdc++.h>
using namespace std;

char b[50][50];
int step_x[6] = {0,1,1,0,-1,-1};
int step_y[6] = {-1,0,1,1,0,-1};
string ans;
set<char> s;
int pre_x,pre_y,m,n;

bool in_range(int pre_x, int pre_y/*,int m,int n*/)
{
    return ((pre_x < n && pre_x >= 0) && (pre_y < m && pre_y >= 0));
}

signed main(void)
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int k; cin >> m >> n >> k;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> b[i][j];
        }
    }
    pre_x = 0,pre_y = m-1;
    int dir;
    for(int i=0;i<k;i++)
    {
        cin >> dir;
        
        if(!(in_range(pre_x + step_x[dir],pre_y + step_y[dir])))
        {
            ans += b[pre_y][pre_x];
            s.insert(b[pre_y][pre_x]);
        }
        else
        {
            pre_y += step_y[dir];
            pre_x += step_x[dir];
            ans += b[pre_y][pre_x];
            s.insert(b[pre_y][pre_x]);
        }
    }
    /*int cnt = 0;
    bool same;
    for(int i=0;i<=k;i++)
    {
        same = false;
        for(int j=0;j<=k;j++)
        {
            if(i == j) continue;
            else
            {
                if(ans[j] == ans[i]) same = true;
            }
        }
        if(!same) cnt++;
    }*/
    

    cout << ans << "\n" << s.size()/*cnt*/ << "\n";

>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
}