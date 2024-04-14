#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    int y;
    while(cin >> y) 
    {
        if(y==0) break;
        cout << (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0) ? "a leap year" : "a normal year") << "\n";
    }
}
    
