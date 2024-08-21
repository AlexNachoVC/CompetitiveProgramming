#include <iostream>

using namespace std;

int main() {
    int n, m, k;

    cin >> n >> m >> k;

    if (n / k >= m) {
        cout << "Iron fist Ketil" << endl;
    }
    else {
        cout << "King Canute" << endl;
    }

    return 0;
}