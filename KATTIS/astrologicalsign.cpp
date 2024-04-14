#include <bits/stdc++.h>
using namespace std;
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(int i=a;i<b;i++)

const string month[] = {"Jan","Feb","Mar","Apr",
                        "May","Jun","Jul","Aug",
                        "Sep","Oct","Nov","Dec"};
const string star[] = {"Capricorn", "Aquarius", "Pisces","Aries",
                        "Taurus","Gemini", "Cancer", "Leo", 
                        "Virgo", "Libra", "Scorpio", "Sagittarius",
                        "Capricorn"};
const int intm[] = {120,219,320,420,
                    520,621,722,822,
                    921,1022,1122,1221,
                    9999};

int str_to_m(const string &s)
{
    for(int i=0;i<12;i++)
    {
        if(s == month[i]) return i+1;
    }
    return -1;
}

signed main(void)
{
    IO
    int t; cin >> t;
    while(t--)
    {
        int d;
        string m;
        cin >> d >> m;
        int res = str_to_m(m)*100 + d;
        int ans;
        for(ans=0;res > intm[ans];ans++);
        cout << star[ans] << "\n";
    }
}