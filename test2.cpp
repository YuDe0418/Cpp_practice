#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int ratings[5] = {0};
    int rating;

    while (true) 
    {
        cin >> rating;
        if (rating == 0) 
        {
            break;
        }
        ratings[rating - 1]++;
    }

    int total_ratings = 0;
    double sum = 0.0;

    for (int i = 0; i < 5; i++) 
    {
        total_ratings += ratings[i];
        sum += (i + 1) * ratings[i];
    }

    for (int i = 4; i >= 0; i--) 
    {
        cout << i + 1 << " " << setw(10) << "("<<ratings[i] << ")"<< " ";
        for (int j = 0; j < ratings[i]; j++) {
            cout << "=";
        }
        cout << "\n";
    }

    cout << "Average rating: ";
    cout << fixed << setprecision(4) << sum / total_ratings << endl;

    return 0;
}
