#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, result(0);

    cin >> n;
    
    if (n % 2 == 0) {
        result = n / 2;
    }
    else {
        result = ((n + 1) / 2) * (-1);
    }

    cout << result << endl;
    return 0;
}