#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; 
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;
        vector<int> numbers(n);
        for (int &e : numbers) {
                cin >> e;
        }
        vector<int> numbers2 = numbers;
        sort(numbers2.begin(), numbers2.end());

        for (int i = 0; i < n; i++) {
            if (numbers[i] != numbers2[1]) {
                cout << i + 1 << endl;
            }
        }
    }
    return 0;
}