#include <bits/stdc++.h>
using namespace std;


signed main(void)
{
    int l,n; cin >> l;
    while(l--)
    {
        cin >> n;
        //   *
        //  ***
        // *****
        for(int i=1;i<=n-3;i++)
        {
            for(int j=0;j<n-i;j++) cout << " ";
            for(int j=0;j<2*i-1;j++) cout << "*";
            cout << "\n";
        }
        
        // *********
        //  *******
        // *********
        for(int i=0;i<2*n-1;i++) cout << "*";
        cout << "\n ";
        for(int i=0;i<2*n-3;i++) cout << "*";
        cout << "\n";
        for(int i=0;i<2*n-1;i++) cout << "*";
        cout << "\n";

        // *****
        //  ***
        //   *
        for(int i=n-3;i>=1;i--)
        {
            for(int j=0;j<n-i;j++) cout << " ";
            for(int j=0;j<2*i-1;j++) cout << "*";
            cout << "\n";
        }
    }
}