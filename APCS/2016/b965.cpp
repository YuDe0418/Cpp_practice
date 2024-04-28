<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
 signed main(void)
{
	
	int a,b,c; cin >> a >> b >> c;
	if(a>b) swap(a,b);
	if(b>c) swap(b,c);
	if(a>b) swap(a,b);
	cout << a << " "<< b << " " << c << "\n";
	
	if((a+b) <= c) cout << "No\n";
	
	if(a*a + b*b < c*c) cout << "Obtuse\n";
	if(a*a + b*b == c*c) cout << "Right\n";
	if(a*a + b*b > c*c) cout << "Acute\n";
=======
#include <bits/stdc++.h>
using namespace std;
 signed main(void)
{
	
	int a,b,c; cin >> a >> b >> c;
	if(a>b) swap(a,b);
	if(b>c) swap(b,c);
	if(a>b) swap(a,b);
	cout << a << " "<< b << " " << c << "\n";
	
	if((a+b) <= c) cout << "No\n";
	
	if(a*a + b*b < c*c) cout << "Obtuse\n";
	if(a*a + b*b == c*c) cout << "Right\n";
	if(a*a + b*b > c*c) cout << "Acute\n";
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
}