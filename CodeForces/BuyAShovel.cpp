#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, r, count(0), i(1);
    bool flag = true;

    cin >> k >> r;

    while (flag) {
        count = k * i;
        if (count % 10 == 0 || count % 10 == r) {
            flag = false;
        }
        else {
            i++;
        }
    }
    cout << i << endl;
    return 0;

}