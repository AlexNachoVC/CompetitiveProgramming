#include <bits/stdc++.h>

using namespace std;

int main() {
    string t, s;

    cin >> s;
    cin >> t;

    reverse(t.begin(), t.end());

    if (t == s) {
        cout << "YES" << endl;
    }
    
    else {
        cout << "NO" << endl;
    }

    return 0;
}