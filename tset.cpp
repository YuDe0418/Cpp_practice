#include <iostream>
#include <math.h>
using namespace std;

int main(){
    // sqrt s(s-a)(s-b)(s-c)
    char try_again = 'Y';
    while(try_again == 'Y')
    {
        float a,b,c,s,ar;
        cin >> a >> b >> c;
        if(a>b) 
            swap(a,b);
        if(b>c)
            swap(b,c);
        if(a>b)
            swap(a,b);
        cout << a << " " << b << " " << c << "\n";
        s = (a+b+c)/2;
        ar = sqrt(s*(s-a)*(s-b)*(s-c));
        cout << ar << "\n";
        cout << "Try again?";
        cin >> try_again;

    }
}