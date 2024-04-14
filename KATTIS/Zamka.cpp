#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio; cin.tie(0); cout.tie(0)

int main(void){
    fast;
    int L,D,X; cin >> L >> D >> X;

    int N = -1;
    int M = -1;
    int sum;
    int num;
    for(int i=L;i<=D;++i)
    {
        sum = 0;
        num = i;
        while(num > 0)
        {
            sum += num % 10;
            num /= 10;   
        }
        if (sum == X)
        {
            N = i;
            break;
        }
    }

    
    for(int i=D;i>=L;--i)
    {
        sum = 0;
        num = i;
        while(num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        if (sum == X)
        {
            M = i;
            break;
        }
    }

    cout << N << '\n';
    cout << M << '\n';
    
}