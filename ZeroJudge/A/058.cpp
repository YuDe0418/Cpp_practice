#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    int n,tmp; cin >> n;
    int a=0,b=0,c=0;
    while(n--)
    {
        cin >> tmp;
        if(tmp%3==0) a++;
        else if(tmp%3 == 1) b++;
        else c++; 
    }
    cout << a << " " << b << " " << c << "\n";
}
    
