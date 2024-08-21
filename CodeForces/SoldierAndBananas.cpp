#include <iostream>

using namespace std;

int main() {
    int k, n, w, price(0);
    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++) {
        price += k * i;
    }

    if (price <= n ) {
        cout << 0 << endl;
    }
    else {
        cout << price - n << endl;
    }
    
    return 0;
}