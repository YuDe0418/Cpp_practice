#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

signed main(void)
{   
    IO
    int x,y,n; cin >> x >> y >> n;
    for(int i=1;i<=n;i++)
    {
        if(i%x == 0 && i%y == 0) cout << "FizzBuzz\n";
        else if(i%x == 0) cout << "Fizz\n";
        else if(i%y == 0) cout << "Buzz\n";
        else cout << i << endl;
    }
} 

