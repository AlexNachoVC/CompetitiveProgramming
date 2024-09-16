#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    string s;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::toupper);

        if (s == "YES") {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}