#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, mn(0), mx(0), different(0);

    cin >> a >> b;

    mn = min(a, b);
    mx = max(a, b);
    
    different = (mx - mn) / 2;

    cout << mn << " " << different << endl;
    return 0;
}