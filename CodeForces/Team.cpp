#include <iostream>

using namespace std;

int main() {
    int n, Petya, Vasya, Tonya, yes(0);

    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        cin >> Petya >> Vasya >> Tonya;
        if ((Petya + Vasya + Tonya) > 1) 
        {
            yes++;
        }
    }
    cout << yes << endl;
    return 0;
}