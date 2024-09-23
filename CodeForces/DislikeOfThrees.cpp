#include <bits/stdc++.h>

using namespace std;

int main() {
    int array[1001];

    int j = 1;

    for (int i = 1; i <= 1666; i++) {
        if (i % 3 != 0) {
            if (i%10 != 3) {
                array[j] = i;
                j = j + 1;
             }

        }
    }

    int t;

    cin >> t;
    int k;

    while (t--) {
        cin >> k;

        cout << array[k] << endl;
    }

    return 0;
}