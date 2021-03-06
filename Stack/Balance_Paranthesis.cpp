#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> s;
    char x;
    string str="{(My name is[viki])}";
    // cout << "Enter String";
    // cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            s.push(str[i]);
        }
        if (s.empty())
        {
            cout << "Unbalanced 1";
            return 0;
        }
        switch (str[i])
        {
        case ')':
            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
            {
                cout << "Unbalanced 2";
                return 0;
            }
            break;
        case ']':
            x = s.top();
            s.pop();
            if (x == '{' || x == '(')
            {
                cout << "Unbalanced 3";
                return 0;
            }
            break;
        case '}':
            x = s.top();
            s.pop();
            if (x == '(' || x == '[')
            {
                cout << "Unbalanced 4";
                return 0;
            }
            break;
        }
    }
    if(s.empty())
    {
        cout<<"Balanced";
        return 0;
    }
    cout<<"unbalanced 5";   
}