#include <iostream>

using namespace std;

int main() {
    string s;
    int one(0), two(0), three(0);

    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '+'){
            continue;
        }
        else if (s[i] == '1') 
        {
            one++;
        }
        else if (s[i] == '2')
        {
            two++;
        }
        else if (s[i] == '3')
        {
            three++;
        }
    }
    for (int i = 0; i < one; i++) {
        cout << '1';
        if ((two == 0 && three == 0) && i == one - 1 ) 
        {
            cout << endl;
        }
        else {
            cout << '+';
        }
    }
    for (int i = 0; i < two; i++) {
        cout << '2';
        if ((three == 0) && i == two - 1)
        {
            cout << endl;
        }
        else {
            cout << '+';
        }
    }
    for (int i = 0; i < three; i++) {
        cout << '3';
        if (i == three - 1) 
        {
            cout << endl;
        }
        else {
            cout << '+';
        }
    }
    return 0;


}