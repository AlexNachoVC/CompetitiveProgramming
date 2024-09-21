#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;

    cin >> t;

    while (t--) {
        int test;

        cin >> test;

        if (test <= 1399) {
            cout << "Division 4" << endl;
        }
        else if (test >= 1400 && test <= 1599) {
            cout << "Division 3" << endl;
        }
        else if (test >= 1600 && test <= 1899) {
            cout << "Division 2" << endl;
        }
        else {
            cout << "Division 1" << endl;
        }
    }
    return 0;
}