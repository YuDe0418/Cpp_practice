#include <bits/stdc++.h>
using namespace std;

signed main()
{
    int count[5] = {0};
    int rating;

    while(true)
    {
        cin >> rating;
        if (rating == 0) break;
        count[rating -1] ++;
    }
    int total = 0;
    double sum = 0.0;

    for(int i=0;i<5;i++)
    {
        total += count[i];
        sum += (i + 1) * count[i];
    }
    for (int i = 4; i >= 0; i--) 
    {
        cout << i + 1 << " " << "(" << (count[i]<10 ? " " : "") << count[i] << ")"<< " |";
        for (int j=0;j<count[i];j++) 
        {
            cout << "=";
        }
        cout << "\n";
    }
    cout << "Average rating: ";
    cout << fixed << setprecision(4) << sum / total << "\n";


    return 0;
}