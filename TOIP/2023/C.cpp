#include <bits/stdc++.h>
using namespace std;
#define FOR(i,n) for(int i=0;i<n;i++)
signed main(void)
{
	int p[3] , t[3]={0} , min= INT_MAX , n , g; 
	FOR(i,3) cin >> p[i];
	FOR(i,3) 
	{
		FOR(j,p[i]) 
		{
			cin >> g;
			t[i] += 3*g;
		}
		t[i] += (p[i] - 1)*2;
		
		if(t[i] < min)
		{
			min = t[i];
			n = i+1;
		}
	}
	cout << n << " " << min << "\n";	
} 