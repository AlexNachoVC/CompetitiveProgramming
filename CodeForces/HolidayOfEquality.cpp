#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, count(0), mx(0);

    cin >> n;
    int array[n];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    mx = *max_element(array, array + n);

    for (int i = 0; i < n; i++) {
        count += mx - array[i];
    }

    cout << count << endl;
    return 0;
}