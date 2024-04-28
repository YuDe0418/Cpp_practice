<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int n,m,x,y; cin >> n >> m >> x >> y;
	bool c = false;
	for(int i=0;i<=m;i++)
	{
		if((i*x+(m-i)*y) == n) 
		{
			cout << i << " " << m-i << "\n"; 
			c = true;
			break;
		}	
	}
	if(!c) cout << -1 << " " << -1 << "\n";
=======
#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int n,m,x,y; cin >> n >> m >> x >> y;
	bool c = false;
	for(int i=0;i<=m;i++)
	{
		if((i*x+(m-i)*y) == n) 
		{
			cout << i << " " << m-i << "\n"; 
			c = true;
			break;
		}	
	}
	if(!c) cout << -1 << " " << -1 << "\n";
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
}