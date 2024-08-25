#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, Danik(0), Anton(0);
    string s;

    cin >> n;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'A') {
            Anton++;
        }
        else if (s[i] == 'D') {
            Danik++;
        }
    }

    if (Anton > Danik) {
        cout << "Anton" << endl;
    }
    
    else if (Danik > Anton) {
        cout << "Danik" << endl;
    }

    else {
        cout << "Friendship" << endl;
    }

    return 0;
}