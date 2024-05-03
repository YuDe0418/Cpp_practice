#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long


const ll md = 1e9+7;

int c[10010][5];
ll num[10010]={0};

// void f(int arr[],int n){
//      for(int i=0;i<n-1;i++) 
//      {
//         for(int j=0;j<n-i;j++) 
//         {
//             if (arr[j] > arr[j+1]) 
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
// }

signed main(void)
{
    IO
    int n; cin >> n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++) cin >> c[i][j];
        //f(c[i],5);
        sort(c[i],c[i]+5);
        for(int j=0;j<5;j++)
        {
            num[i] *= 1000;
            num[i] += c[i][j];
        } 
    } 
    sort(num,num+n);
    int max=1,ans=1,cnt=1;
    for(int i=1;i<n;i++)
    {
        if(num[i] == num[i-1]) cnt++;
        else
        {
            if(cnt > max) 
            {
                max = cnt;
                ans = cnt;
            }
            else if(cnt == max) ans += cnt;
            cnt=1;
        }
    }
    cout << ans << endl;
}