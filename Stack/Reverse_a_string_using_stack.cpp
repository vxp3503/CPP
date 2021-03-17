#include <bits/stdc++.h>
using namespace std;
int reverse(string &s)
{
    stack<char> v;
    for (int i = 0; i < s.size(); i++)
    {
        v.push(s[i]);
    }
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = v.top();
        v.pop();
    }
    return 0;
}
int main()
{
    string s;
    cout << "Enter String";
    cin >> s;
    cout << "After revers string becomes";
    reverse(s);
    cout << endl
         << s;
}