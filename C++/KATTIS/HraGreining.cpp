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

}   