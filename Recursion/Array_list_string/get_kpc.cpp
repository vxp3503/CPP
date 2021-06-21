#include<bits/stdc++.h>
using namespace std;
static string given[10]={".;" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" ,"tu","vwx","yz"};
vector<string> solution(string s)
{
    if(s.length()==0)
    {
        vector<string>p;
        p.push_back("");
        return p;
    }
    char first=s[0];
    string rest=s.substr(1);
    vector<string>rec=solution(rest);
    vector<string>result;
    int q=first-'0';
    string g=given[q];
    for(auto &i:g)
    {
        for(auto &j:rec)
        {
            result.push_back(i+j);
        }
    }
    return result;
}
int main(){
    string s;
    cin >> s;
    vector<string> ans = solution(s);
    int cnt = 0;

    cout << '[';
    for (string str : ans){
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}