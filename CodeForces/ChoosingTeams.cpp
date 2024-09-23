#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, y, count(0);;

    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> y;

        if (y <= 5 - k) {
            count++;
        }
    }
    cout << count / 3 << endl;
    return 0;
}