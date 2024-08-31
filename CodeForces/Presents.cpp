#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;

    cin >> n;

    int input[n+1];
    for (int i = 1; i <= n; i++) {
        cin >> k;
        input[k] = i;
    }

    for (int i = 1; i <= n; i++) {
        cout << input[i] << " ";
    }
    return 0;
}