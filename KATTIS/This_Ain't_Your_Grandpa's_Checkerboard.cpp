#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio; cin.tie(0); cout.tie(0)
#define FOR(i,n) for(int i = 0; i < n; ++i)

bool correct_grid(vector<string>& x, int n)
{
    FOR(i,n)
    {
        int r_B=0, r_W=0, c_B=0, c_W=0;
        FOR(j,n)
        {
            //檢查同列的黑白數
            if (x[i][j] == 'B') r_B++;
            else r_W++;
            //檢查同行的黑白數
            if (x[j][i] == 'B') c_B++;
            else c_W++;

            // 檢查是否有連續三個或更多同色
            if (j < n - 2) 
            {
                if (x[i][j] == x[i][j + 1] && x[i][j] == x[i][j + 2])
                    return false;
                if (x[j][i] == x[j + 1][i] && x[j][i] == x[j + 2][i])
                    return false;
            }
        }

            //檢查黑白數是否相同
            if (r_B != r_W || c_B != c_W)
                return false;
        }
        return true;
}
int main(){
    fast;
    int n; cin>>n;
    vector<string> x(n);
    FOR(i,n) cin >> x[i];
    
    if(correct_grid(x ,n)) cout << "1\n";
    else cout << "0\n";

    return 0;

}
/*#include <iostream>
using namespace std;
#define fast ios::sync_with_stdio; cin.tie(0); cout.tie(0)
#define FOR(i,n) for(int i = 0; i < n; ++i)

bool correct_grid(string x[], int n)
{
    FOR(i,n)
    {
        int r_B=0, r_W=0, c_B=0, c_W=0;
        FOR(j,n)
        {
            //檢查同列的黑白數
            if (x[i][j] == 'B') r_B++;
            else r_W++;
            //檢查同行的黑白數
            if (x[j][i] == 'B') c_B++;
            else c_W++;

            // 檢查是否有連續三個或更多同色
            if (j < n - 2) 
            {
                if (x[i][j] == x[i][j + 1] && x[i][j] == x[i][j + 2])
                    return false;
                if (x[j][i] == x[j + 1][i] && x[j][i] == x[j + 2][i])
                    return false;
            }
        }

            //檢查黑白數是否相同
            if (r_B != r_W || c_B != c_W)
                return false;
        }
        return true;
}
int main(){
    fast;
    int n; cin>>n;
    string x[n];
    FOR(i,n) cin >> x[i];
    
    if(correct_grid(x,n)) cout << "1\n";
    else cout << "0\n";

    return 0;

}
*/