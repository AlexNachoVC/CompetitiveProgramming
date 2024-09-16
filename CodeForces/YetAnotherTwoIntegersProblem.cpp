#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, a, b, d(0);

    cin >> t;

    while (t--) {
        cin >> a >> b;

        d = abs(a-b);

        cout << (d + 9) / 10 << endl;
    }
    return 0;
}