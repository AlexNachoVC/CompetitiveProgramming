#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, l, d;
    
    cin >> n >> l;
    int lanterns[n];

    for (int i = 0; i < n; i++) {
        cin >> lanterns[i];
    } 

    sort(lanterns, lanterns + n);
    d = max(lanterns[0], l - lanterns[n - 1]) * 2;
 
    for (int i = 0; i < n; i++ ) {
        d = max(d, lanterns[i] - lanterns[i-1]);
    }

    cout <<fixed<<setprecision(9)<< (double) d / 2 << endl;
    return 0;
}