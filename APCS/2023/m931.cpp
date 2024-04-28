<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    int n; cin >> n;
    int a,d,A[50],D[50],p[50];
    //int max = 0;
    for(int i=0;i<n;i++)
    {
        cin >> a >> d;
        A[i] = a;
        D[i] = d;
        p[i] = a*a + d*d;
    }
    sort(p,p+n);
    for(int i=0;i<n;i++)
    {
        if(A[i]*A[i] + D[i]*D[i] == p[n-2]) cout << A[i] << " " << D[i] << "\n"; 
    }
    
=======
#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    int n; cin >> n;
    int a,d,A[50],D[50],p[50];
    //int max = 0;
    for(int i=0;i<n;i++)
    {
        cin >> a >> d;
        A[i] = a;
        D[i] = d;
        p[i] = a*a + d*d;
    }
    sort(p,p+n);
    for(int i=0;i<n;i++)
    {
        if(A[i]*A[i] + D[i]*D[i] == p[n-2]) cout << A[i] << " " << D[i] << "\n"; 
    }
    
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
}