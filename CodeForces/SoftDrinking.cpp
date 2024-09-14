#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    int ml(0), ls(0), salt(0); 
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    ml = (k * l) / nl;
    ls = c * d;
    salt = p / np;

    int total = min({ml, ls, salt}) / n;

    cout << total << endl;
    return 0;
}