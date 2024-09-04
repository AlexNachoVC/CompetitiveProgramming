#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x(1), y(2);
    cin >> n;
    int log;
    bool flag = true;

    for (int i = 1; i <= n; i++) {
        cin >> log;

        if (log == x || log == y) {
            x = 6 - x - y;
            y = log;
        }
        else {flag = false;}
        
    }

    if (flag) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}