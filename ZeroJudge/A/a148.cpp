<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
 
signed main(void) 
{
    int n,tmp,sum;
    while (cin >> n) {
        sum=0;
        for (int i=0; i<n;i++) 
        {
            cin >> tmp;
            sum += tmp;
        }
        if (sum> 59*n) cout << "no\n"; 
        else cout << "yes\n";
    }
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;
 
signed main(void) 
{
    int n,tmp,sum;
    while (cin >> n) {
        sum=0;
        for (int i=0; i<n;i++) 
        {
            cin >> tmp;
            sum += tmp;
        }
        if (sum> 59*n) cout << "no\n"; 
        else cout << "yes\n";
    }
    return 0;
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
}