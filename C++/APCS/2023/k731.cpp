#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y, px, py, dir, ori_dir = 0; // original direction, first dir = east
    int left = 0, right = 0, back = 0;
    cin >> n >> px >> py;

    for (int i = 1; i < n; i++) {
        cin >> x >> y;

        if (x > px) dir = 0; // East
        else if (y < py) dir = 1; // South
        else if (x < px) dir = 2; // West
        else dir = 3; // North 

        if (dir == (ori_dir + 1) % 4) right++;
        else if (dir == (ori_dir + 2) % 4) back++;
        else if (dir == (ori_dir + 3) % 4) left++;

        ori_dir = dir;

        px = x, py = y;
    }

    cout << left << ' ' << right << ' ' << back << '\n';
    return 0;
}
