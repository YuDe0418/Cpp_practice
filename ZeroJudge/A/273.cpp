#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long n, k;
    while(cin >> n >> k)
    {
        if(n == 0 && k == 0)
        {
            cout << "Ok!\n";
        }
        if(n != 0)
        {
            if(k == 0)
            {
                cout << "Impossib1e!\n";
            }
            else if(n%k == 0)
            {
                cout << "Ok!\n";
            }
            else if(n%k != 0)
            {
                cout << "Impossib1e!\n";
            }
        }
    }
}

