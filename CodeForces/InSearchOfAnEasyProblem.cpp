#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, ns, state(false);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> ns;
        if (ns == 1) {
            state = true; 
        }
    }

    if (state) {
        cout << "HARD" << endl;
    }
    else {
        cout << "EASY" << endl;
    }

    return 0;
}