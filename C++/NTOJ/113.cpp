#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
   int n; cin >> n;
   char a[n];
   string s; cin >> s;
   for(int i=0;i<n;i++) a[i] = s[i];
   char c; cin >> c;
   if(c == 'L')
   {
        for(int i=0;i<n;i++)
        {
            if(a[i] == 'P')
            {
                if(i == 0)
                {
                    a[i] = '.';
                    a[s.size()-1] = 'P';
                    break;
                }
                else
                {
                    a[i] = '.';
                    a[i-1] = 'P';  
                    break;  
                }
            }
        }
    }
    if(c == 'R')
    {
        for(int i=0;i<n;i++)
        {
            if(a[i] == 'P')
            {
                if(i == s.size()-1)
                {
                    a[i] = '.';
                    a[0] = 'P';
                    break;
                }
                else
                {
                    a[i] = '.';
                    a[i+1] = 'P';    
                    break;
                }
            }
        }
    }
    for(int i=0;i<s.size();i++) cout << a[i];
    cout << "\n";
}