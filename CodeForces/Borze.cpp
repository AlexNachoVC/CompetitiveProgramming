#include <bits/stdc++.h>

using namespace std;

int main() {
    string s, number("");
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '.') {
            number += '0';
        }
        else {
            if (s[i] != s[i+1]) {
                number += '1';
                i++;
            }
            else if (s[i] == s[i+1]) {
                number += '2';
                i++;
            }
        }
    }

    cout << number << endl;
    return 0;
}