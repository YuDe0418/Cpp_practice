<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    int n; cin >> n;
    string s; cin >> s;
    char c;
    for (int i=0;i<s.size();i++) 
    {
        c = (s[i] - 'A' - n + 26) % 26 + 'A';
        cout << c;
    }
    cout << "\n";
=======
#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    int n; cin >> n;
    string s; cin >> s;
    char c;
    for (int i=0;i<s.size();i++) 
    {
        c = (s[i] - 'A' - n + 26) % 26 + 'A';
        cout << c;
    }
    cout << "\n";
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
}