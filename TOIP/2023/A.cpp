#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int t,g,w,e,b; 
	cin >> t >> g >> w >> e >> b;
	int ut = g + w + e + b;
	if(t >= ut) cout << ut << "\n";
	else cout << -1 << "\n";
	
}