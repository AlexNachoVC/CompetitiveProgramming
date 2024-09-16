#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;
    int cards[n];

    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    int l(0), r(n-1), sereja(0), dima(0);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (cards[r] > cards[l]) {
                sereja += cards[r];
                r--;
            }
            else if (cards[r] < cards[l]) {
                sereja += cards[l];
                l++;
            }
            else {
                sereja += cards[l];
            }
        }
        else {
            if (cards[r] > cards[l]) {
                dima += cards[r];
                r--;
            }
            else if (cards[r] < cards[l]) {
                dima += cards[l];
                l++;
            }
            else {
                dima += cards[l];
            }
        }
    }
    cout << sereja << " " << dima << endl;
    return 0;
}