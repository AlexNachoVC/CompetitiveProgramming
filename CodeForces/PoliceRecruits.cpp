#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, e, sum(0), p(0);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> e;

        if (e == -1) {
            if (p > 0) {
                p--;
            }
            else {
                sum++;
            }
        }
        else {
            p += e;
        }
    }
    cout << sum << endl;
    return 0;
}