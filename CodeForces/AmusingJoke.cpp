#include <bits/stdc++.h>

using namespace std;

int main() {
    string s1, s2, s3, s12;

    cin >> s1 >> s2 >> s3;

    s12 = s1 + s2;

    sort(s12.begin(), s12.end());
    sort(s3.begin(), s3.end());

    if (s12 == s3) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}