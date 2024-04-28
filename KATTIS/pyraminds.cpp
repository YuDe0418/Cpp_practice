<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

signed main(void)
{   
    IO
    int n; cin >> n;
    int i=-1,l=0;
    while(n > 0)
    {
        i+=2; 
        n -= i*i;
        if(n<0) i-2;
        else l++;
    }
    cout << l << endl;
    
} 

=======
#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

signed main(void)
{   
    IO
    int n; cin >> n;
    int i=-1,l=0;
    while(n > 0)
    {
        i+=2; 
        n -= i*i;
        if(n<0) i-2;
        else l++;
    }
    cout << l << endl;
    
} 

>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
