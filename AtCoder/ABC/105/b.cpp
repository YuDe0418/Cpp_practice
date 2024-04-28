<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

signed main()
{
	int n; cin >> n;
	if(n < 4) cout << "No" << endl;
    else
    {
        if((n%4) == 0 || (n%7) == 0) cout << "Yes" << endl;
        else
        {
            for(int i=0;i<n/4+1;i++)
            {
                for(int j=0;j<n/7+1;j++)
                {
                    if((4*i + 7*j) == n)
                    {
                        cout << "Yes" << endl;
                        return 0;
                    }
                    else if((4*i + 7*j)>n) 
                    {
                        break;
                    }
                }
            }
            cout << "No" << endl;
        }
    }
=======
#include <bits/stdc++.h>
using namespace std;

signed main()
{
	int n; cin >> n;
	if(n < 4) cout << "No" << endl;
    else
    {
        if((n%4) == 0 || (n%7) == 0) cout << "Yes" << endl;
        else
        {
            for(int i=0;i<n/4+1;i++)
            {
                for(int j=0;j<n/7+1;j++)
                {
                    if((4*i + 7*j) == n)
                    {
                        cout << "Yes" << endl;
                        return 0;
                    }
                    else if((4*i + 7*j)>n) 
                    {
                        break;
                    }
                }
            }
            cout << "No" << endl;
        }
    }
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
}