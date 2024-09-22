#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    string s = "codeforces";
    set<char> S(s.begin(), s.end());
    cin >> t;

    while (t--) {
        char c;

        cin >> c;

        if (S.count(c)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}