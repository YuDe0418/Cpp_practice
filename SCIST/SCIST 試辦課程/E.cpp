<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main(){
    string N = "Scist";
    int n;
    cin >> n;
    if (n % 5 == 0){
        cout << N[4];
    }
    else{
        cout << N[n % 5 - 1];
    }
=======
#include <bits/stdc++.h>
using namespace std;

int main(){
    string N = "Scist";
    int n;
    cin >> n;
    if (n % 5 == 0){
        cout << N[4];
    }
    else{
        cout << N[n % 5 - 1];
    }
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
}