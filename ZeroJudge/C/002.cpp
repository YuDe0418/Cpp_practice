<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
#define int long long 

int f(int n){
    if(n<=100) return f(f(n+11));
    else if(n>=101) return n-10;
}

signed main(void)
{
    int n;
    while(cin >> n)
    {
        if(n==0) return 0;
        cout << "f91(" << n << ") = " << f(n) << endl; 
    }
=======
#include <bits/stdc++.h>
using namespace std;
#define int long long 

int f(int n){
    if(n<=100) return f(f(n+11));
    else if(n>=101) return n-10;
}

signed main(void)
{
    int n;
    while(cin >> n)
    {
        if(n==0) return 0;
        cout << "f91(" << n << ") = " << f(n) << endl; 
    }
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
}