#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    int sum = 0;
    int inp[3];
    for(int i=0;i<3;i++) cin >> inp[i];
    for(int i=0;i<3;i++)
    {
        sum += (7 - inp[i]); 
    }
    cout << sum <<"\n";
}