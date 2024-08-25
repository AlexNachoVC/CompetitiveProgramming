#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, a, b, mx(0), inside(0);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        inside = inside - a + b;
        mx = max(inside, mx);
    }

    cout << mx << endl;
    return 0;
}