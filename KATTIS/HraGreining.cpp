<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string dna;
    cin >> dna;

    size_t found = dna.find("COV");

    if (found != string::npos) 
    {
        cout << "Veikur!\n"; 
    } 
    else 
    {
        cout << "Ekki veikur!\n";
    }

=======
#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string dna;
    cin >> dna;

    size_t found = dna.find("COV");

    if (found != string::npos) 
    {
        cout << "Veikur!\n"; 
    } 
    else 
    {
        cout << "Ekki veikur!\n";
    }

>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
}   