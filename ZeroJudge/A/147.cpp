#include <bits/stdc++.h>
using namespace std;
  
signed main(void) 
{
    int n;
    while (cin >> n) 
    {
        for (int i=1; i<n;i++) 
        {
            if (i % 7 != 0) cout << i << " ";
        }
        cout << "\n";
    }
}