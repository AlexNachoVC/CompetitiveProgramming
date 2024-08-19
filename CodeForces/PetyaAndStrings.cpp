#include <iostream>

using namespace std;

int main() {
    string first, second;

    cin >> first >> second;

    for (int i = 0; i < first.length(); i++) {
        if (first[i] < 92) {
            first[i] += 32;
        }
        if (second[i] < 92) {
            second[i] += 32;
        }
    }
    
    if (first == second) {
        cout << 0;
    }
    else if (first < second) {
        cout << -1;
    } 
    else {
        cout << 1;
    }
    
    return 0;
}