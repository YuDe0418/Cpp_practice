<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++) 

signed main(void)
{
	
    int n,a; cin >> n;
    for(int i=0;i<n;i++)
    {
        for(int spc = 1;spc<n-i;spc++) cout << " ";
        for(int sta = 0; sta<i*2+1;sta++) cout << "*";
        cout << endl;
    }
}
=======
#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;i++) 

signed main(void)
{
	
    int n,a; cin >> n;
    for(int i=0;i<n;i++)
    {
        for(int spc = 1;spc<n-i;spc++) cout << " ";
        for(int sta = 0; sta<i*2+1;sta++) cout << "*";
        cout << endl;
    }
}
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
