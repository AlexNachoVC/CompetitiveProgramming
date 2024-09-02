#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;

    cin >> n;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    set<char> stringLetters(s.begin(), s.end());

    if (stringLetters.size() >= 26) {
        cout << "YES" << endl;
    }  
    else {
        cout << "NO" << endl;
    }
    return 0;
}