#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int first_c(char c) 
{
    int res;
    if('A' <= c && c <= 'H') res = c - 'A' + 10;
    else if(c == 'I') res = 34;
    else if('J' <= c && c <= 'N' ) res = c -'A' + 18;
    else if(c == 'O') res = 35;
    else if(c == 'W') res = 32;
	else if(c == 'X') res = 30;
	else if(c == 'Y') res = 31;
	else if(c == 'Z') res = 33;
	return res;
}

signed main(void)
{
    IO
    string s; cin >> s;
    int s1 = first_c(s[0]);
    int s2 = s1%10 + s1/10;
    int s3=0,n=8;
    for(int i=0;i<s.size()-1;i++)
    {
        s3 += (int)(s[i] - '0') * n;
        n--;
    }
    int s4 = s2 + s3 + (s.back() - '0');
	if(s4 % 10 == 0) cout << "real\n";
	else cout << "fake\n";

}