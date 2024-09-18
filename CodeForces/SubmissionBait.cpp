#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;

    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a+n, greater<int>());   
        
        int tmp = 1;
        int ok = 1;
        for (int i = 0; i < n-1; i++) {
            if (a[i] == a[i+1]) {
                tmp++;
            }
            else {
                if (tmp % 2 == 1) {
                    ok = 0;
                    break;
                }
                else {
                    tmp = 1;
                }
            }
        }

        if (tmp % 2 == 1 && ok) {
            cout << "YES" << endl;
            continue;
        }

        if (ok) {
            cout << "NO";
        }
        else {
            cout << "YES";
        }
        cout << endl;
    }
    return 0;
}