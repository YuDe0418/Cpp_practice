#include <iostream>

using namespace std;

int main() 
{
    long long n, p;
    cin >> n >> p;

    if (n % p == 0) cout << n / p + 1 << endl;
    else cout << n / p << endl;

    return 0;
}
