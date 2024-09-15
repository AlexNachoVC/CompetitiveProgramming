#include <bits/stdc++.h>

using namespace std;

int main() {
    int numbers[4], mx(0), a(0), b(0), c(0);

    for (int i = 0; i < 4; i++) {
        cin >> numbers[i];
    }

    sort(numbers, numbers + 4);

    mx = numbers[3];
    a = mx - numbers[0];
    b = mx - numbers[1];
    c = mx - numbers[2];

    cout << a << " " <<  b << " " << c << endl;
    return 0;
}