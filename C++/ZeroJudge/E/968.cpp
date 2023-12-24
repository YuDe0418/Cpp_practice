#include <bits/stdc++.h>
using namespace std;
 
signed main(void)
{
    int n,a[21]={},tmp; cin >> n;
    for(int i=0;i<3;i++)
    {
        cin >> tmp;
        a[tmp] = 1;
    }
    for(int i=n;i>0;i--)
    {
        if (!a[i]) cout << "No. " << i << "\n";
    }
}