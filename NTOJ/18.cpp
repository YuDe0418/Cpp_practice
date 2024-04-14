#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    string s;
    while(getline(cin,s))
    {
        string ns;
        for(int i=0;i<s.size();i++)
        {
            if('A' <= s[i] && s[i] <= 'Z') ns += s[i] + ('a' - 'A');
            else if('a' <= s[i] && s[i] <= 'z') ns += s[i];
        }
        //cout << ns << endl;
        bool same = true;
        for(int i=0;i<=ns.size()/2;i++)
        {
            if(ns[i] == ns[ns.size()-i-1]) continue;
            else same = false;
        }
        if(same) cout << "SETUP! " << s << "\n";
        else cout << s << "\n";
    }
}