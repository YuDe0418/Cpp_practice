#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
    cout << "Enter an integer: ";
    cin >> n;

    int result = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            result *= 2;
        }
        n /= 2;
        if (n > 0) {
            result *= result;
        }
    }

    cout << "2 raised to the power of " << n << " is: " << result << endl;
}
