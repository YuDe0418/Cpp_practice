#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n; cin >> n;
    string echo[n];
    for(int i=0;i<n;i++)
    {
        cin >> echo[i];
    }
    for(int i=0;i<n;i+=2)
    {
        cout << echo[i] << '\n';
    }
}   