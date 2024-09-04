#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;

        int array[n];
        int odd(0), even(0);

        for (int j = 0; j < n; j++) {
            
            cin >> array[j];

            if (array[j] % 2 == 0) {
                even++;
            }
            else {
                odd++;
            }
        }
        if (even && odd) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
    return 0;
}