#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;

    cin >> t;

    while (t--) {
        string s;
        int left(0), right(0);

        cin >> s;
        for (int i = 0; i < 3; i++) {
            left += int(s[i]);
        }

        for (int i = 3; i < 6; i++) {
            right += int(s[i]);
        }

        if (left == right) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}