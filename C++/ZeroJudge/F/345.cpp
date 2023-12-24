#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

signed main(void) {
    IO
	int n, a[1000000]; cin >> n;
	for (int i=0;i<n;i++) cin >> a[i];
	for (int i=n-1; i >=0;i--) cout << a[i] << ' ';
	cout << '\n';
}