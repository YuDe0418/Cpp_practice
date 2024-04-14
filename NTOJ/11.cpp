#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
int ans;
vector<int>v;

// void merge(int l, int r)
// {
//     int mid = (l+r)/2, tmp[r-l+1];
//     for(int i=l,j=mid+1,k=0; i<=mid || j<=r; ++k)
//     {
//         if((v[i] <= v[j] && i <= mid) || j > r) 
//         {
//             tmp[k] = v[i], ++i;
//             //ans = r-j+1;
//         }
//         else 
//         {
//             tmp[k] = v[j], ++j;
//             ans += mid-i+1;
//         }
//     }
//     for(int i=l,j=0; i<=r; ++i,++j) v[i] = tmp[j];
// }

// void MergeSort(int l, int r)
// {
//     if(l == r) return;
//     int mid = (l+r)/2;
//     MergeSort(l,mid); MergeSort(mid+1,r);
//     merge(l,r);
// }

void merge_sort(int l,int r)
{
    if(l==r) return;

    int mid = (l+r)/2, tmp[r-l+1];
    merge_sort(l, mid);
    merge_sort(mid + 1, r);

    //左右
    int i = l,j = mid +1;
    for(int k=0;i<=mid || j <=r;k++)
    {
        if(v[i] <= v[j] && i <= mid || j > r) tmp[k] = v[i++];
        else
        {
            tmp[k] = v[j++];
            ans += mid - i + 1;
        } 
    }
    for(int i=l,j=0; i<=r; ++i,++j) v[i] = tmp[j];
}



signed main()
{
    IO
    int n; cin >> n;
    int x;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        v.emplace_back(x);
    }
    merge_sort(0,v.size()-1);
    cout << ans << endl;
}