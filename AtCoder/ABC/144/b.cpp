#include <bits/stdc++.h>
using namespace std;

signed main()
{
	int n; cin >> n;
    for(int i=1;i<10;i++)
    {
        for(int j=1;j<10;j++)
        {
            if(i*j == n) 
            {
                cout << "Yes" << endl;
                return 0;
            }

        }
    }
    cout << "No" << endl;
}