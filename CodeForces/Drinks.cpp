#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, total(0);

    cin >> n;

    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        total += p;
    }
    cout <<fixed<<setprecision(12)<< (long double) total / n << endl;
    return 0;
}