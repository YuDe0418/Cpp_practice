#include <windows.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8);
    int m, d, s;
    cin >> m >> d;
    s = (m * 2 + d) % 3;
    if(s == 0) cout << "普通";
    else if(s == 1) cout << "吉";
    else cout << "大吉";
    return 0;
}