#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define FOR(i,n) for(int i = 0; i < n; ++i)
#define DFOR(a,b) FOR(i,a) FOR(j,b)
#define Dinput(x,a,b) DFOR(a,b) cin >> x[i][j] //讀入二維陣列

//未完成

int main(){
   fast;
    int r,c,k,m; cin >> r >> c >> k >> m;
    int A[r][c], T[r][c], num, t, l; //A存總人數 T存遷移增加的人數
    Dinput(A,r,c);
    FOR(q,m){
        DFOR(r,c) T[r][c] = 0;
        DFOR(r,c){
            if(A[i][j] == -1) continue;
            num=A[i][j]/k;
            t=0;
            if(i!=0 && A[i-1][j]!=-1){
                    T[i-1][j]+=num;
                    t++;    
            }
            if(j!=0 && A[i][j-1]!=-1){                   
                    T[i][j-1]+=num;
                    t++;                    
            }
            if(i!=r-1 && A[i+1][j]!=-1){                    
                    T[i+1][j]+=num;
                    t++;                   
            }
            if(j!=c-1 && A[i][j+1]!=-1){
                    T[i][j+1]+=num;
                    t++;
            }
            A[i][j]-=num*t;
            
        }
        DFOR(r,c) if(A[i][j]!=-1) A[i][j]+=T[i][j]; //更新人數
        // FOR(i,r)
        // {
        //     FOR(j,c)
        //     {
        //         cout << A[i][j] << ' ';
        //     }
        //     cout << '\n';
        // }
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
    cout << "\n" << minn << "\n" << maxn << "\n";
}
