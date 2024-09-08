#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;

    getline(cin, s);
    set<char> setLetters;

    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            setLetters.insert(s[i]);
        }
    }

    cout << setLetters.size() << endl;
    return 0;

}