#include <bits/stdc++.h>
using namespace std;

int main()
{
 
    string s;
    cin >> s;
 
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i] == s[i+1])
        {
            reverse(s.begin(),s.begin()+i+1);
            reverse(s.begin()+i+1,s.end());
            break;
        }
    }
    int mx = 1, cnt = 0;
    for(int i=1; i<s.size(); i++)
    {
        if(s[i] != s[i-1])
            cnt++;
        else
            cnt = 0;
        mx = max(cnt+1,mx);
    }
    cout << mx << endl;
}