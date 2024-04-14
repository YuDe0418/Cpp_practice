#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    int t,y,cs=1;cin >> t;
    for (int i = 0; i < t; i++) 
    {
        cin >> y;
        cout << "Case " << cs << ": " <<(((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0) ? "a leap year" : "a normal year") << "\n";
        cs++;
    }
}
    
