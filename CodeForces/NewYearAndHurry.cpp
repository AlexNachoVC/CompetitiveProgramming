#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, time(0), flag(0);

    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        time += 5 * i; 
        flag = i;

        if (k + time <= 240) {
            continue;
        }
        else {
            flag--;
            break;
        }
    }

    cout << flag << endl;
    return 0;
}