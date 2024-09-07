#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, count(0);

    cin >> n;

    while (n){
        if (n >= 100) {
            n -= 100;
            count++;
        }
        else if (n >= 20) {
            n -= 20;
            count++;
        }
        else if (n >= 10) {
            n -= 10;
            count++;
        }
        else if (n >= 5) {
            n -= 5;
            count++;
        }
        else {
            n -= 1;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}