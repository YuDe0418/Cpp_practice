<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;


signed main(void)
{
    int n; cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr,arr+n-1);
    for(int i=0;i<n;i++)
    {
        if(arr[i] != i+1)
        { 
            cout << i+1;
            break;
        }
    }
    cout << endl;
}
/*
    sum = n*(n+1)/2 ;
    for(int i=0;i<n;i++) sum -= arr[i];
    cout << sum;
=======
#include <bits/stdc++.h>
using namespace std;


signed main(void)
{
    int n; cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    sort(arr,arr+n-1);
    for(int i=0;i<n;i++)
    {
        if(arr[i] != i+1)
        { 
            cout << i+1;
            break;
        }
    }
    cout << endl;
}
/*
    sum = n*(n+1)/2 ;
    for(int i=0;i<n;i++) sum -= arr[i];
    cout << sum;
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
*/