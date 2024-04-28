<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

signed main(void){
    int q,x; cin >> q;
    string num = "1";
    while(q--)
    {
    	string s; cin >> s;
    	if(s == "LS") 
    	{
    		if(num != "0") num += "0";
    	}
    	if(s == "RS")
    	{
    		if(num.length() != 1) num.pop_back();
    		else num = "0";
    	}
    	if(s == "Rp")
    	{
    		cin >> x;
    		num[num.length() - 1] = x + '0';
    	}
    	
    }
    cout << num << "\n";
=======
#include <bits/stdc++.h>
using namespace std;

signed main(void){
    int q,x; cin >> q;
    string num = "1";
    while(q--)
    {
    	string s; cin >> s;
    	if(s == "LS") 
    	{
    		if(num != "0") num += "0";
    	}
    	if(s == "RS")
    	{
    		if(num.length() != 1) num.pop_back();
    		else num = "0";
    	}
    	if(s == "Rp")
    	{
    		cin >> x;
    		num[num.length() - 1] = x + '0';
    	}
    	
    }
    cout << num << "\n";
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
}