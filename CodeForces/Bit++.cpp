#include <iostream>

using namespace std;

int main() {
    int n, output(0);
    string statement;

    cin >> n;
    while (n--) {
        cin >> statement;

        if (statement == "++X" || statement == "X++") {
            output++;
        }
        if (statement == "--X" || statement == "X--") {
            output--;
        }
    }
    cout << output << endl;
    return 0;
}