#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define FOR(i,n) for(int i = 0; i < n; ++i)
#define DFOR(a,b) FOR(i,a) FOR(j,b)
#define Dinput(x,a,b) DFOR(a,b) cin >> x[i][j] //讀入二維陣列
#define int long long

signed main(void){
   fast;
    int r,c,k,m; cin >> r >> c >> k >> m;
    int A[r][c], T[r][c], num, t, p, l; //A存總人數 T存遷移增加的人數
    Dinput(A,r,c);
    FOR(q,m)
    {
        //DFOR(r,c) T[r][c] = 0;
        DFOR(r,c)
        {
            if(A[i][j] == -1) T[i][j] = 0;
            else
            {
                t = 0; p = 0;
                if(i!=0 && A[i-1][j]!=-1)
                {
                    p += A[i-1][j]/k;
                    t++;    
                }
                if(j!=0 && A[i][j-1]!=-1)
                {                   
                    p += A[i][j-1]/k;
                    t++;                    
                }
                if(i!=r-1 && A[i+1][j]!=-1)
                {                    
                    p += A[i+1][j]/k;
                    t++;                    
                }
                if(j!=c-1 && A[i][j+1]!=-1)
                {
                    p += A[i][j+1]/k;
                    t++;  
                }
                num = A[i][j] / k * t; // 搬出去的人就是 現在這個城市的人/k 乘 相鄰城市數
                T[i][j] = p - num; // 更新這天這個城市人數的變化為 搬進來的 - 搬出去的
                }
        }
         DFOR(r,c)  A[i][j] += T[i][j]; //更新人數
    }
    
    int maxn = INT_MIN, minn = INT_MAX;
    DFOR(r,c)
    {   // 找答案
        if(A[i][j] == -1) continue;
        else
        {
            maxn = max(maxn,A[i][j]);
            minn = min(minn,A[i][j]);
        }
    }
    cout  << minn << "\n" << maxn << "\n";
}
