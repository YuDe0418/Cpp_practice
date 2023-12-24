#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    int n; cin >> n;
    int mx=-1,time=0,wrg=0;
    int t,s;
    for(int i=0;i<n;i++)
    {
        cin >> t >> s;
        if(s > mx)
        {
            time = t;
            mx = s;
        }
        if(s == -1) wrg++;
    }
    cout << max(0,(mx-n-(wrg*2))) << " " << time << "\n";
}