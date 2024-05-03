#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define input(x) for(auto &i : x) cin >> i

const ll md = 1e9+7;

//haven't completed
int slidingwindow(vector<int> &nums, int k,int n){
	multiset<int> s;
    vector<int> v;
    for(int i=0;i<k;i++) s.insert(nums[i]);
    // for(int i=k;i<=n;i++) 
    // {
    //     v.push_back(*s.rbegin());
    //     if(!s.empty()) s.erase(s.find(nums[i - k]));
    //     s.insert(nums[i]);
    // }
    // return *max_element(v.begin(), v.end());
    int maxsum = *s.rbegin(); 
    for(int i=k;i<n;i++) 
    {
        s.erase(s.find(nums[i-k])); 
        s.insert(nums[i]); 
        maxsum = max(maxsum, *s.rbegin() - nums[i-k]); 
    }
    return maxsum;
}

void solve(){
    int n,k; cin >> n >> k;
    int a[n];
    vector<int> sum(n+1,0);
    input(a);
    for(int i=1;i<=n;i++)
    {
        sum[i] = sum[i-1] + a[i-1];
    }
    cout << slidingwindow(sum,k,n) << endl;
}

signed main(void){
    IO
    solve();
}