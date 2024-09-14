#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, mx(0), mn(0), count(0), points;

    cin >> n;

    cin >> points;
    mx = mn = points;

    for (int i = 1; i < n; i++) {
        cin >> points;
        if (points > mx) {
            mx = points;
            count++;
        }
        else if (points < mn) {
            mn = points;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}