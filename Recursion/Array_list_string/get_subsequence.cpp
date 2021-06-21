#include <iostream>
#include <vector>
using namespace std;

vector<string> gss(string s){
    if(s.length()==0)
    {
        vector<string>p;
        p.push_back("");
        return p;
    }
    char k=s[0];
    string rest=s.substr(1);
    vector<string>r=gss(rest);
    vector<string>result;
    for(auto &i:r)
    {
        result.push_back(i);
    }
    for(auto &i:r)
    {
        result.push_back(k+i);
    }
    return result;

}
int main(){
    string s;
    cin >> s;
    vector<string> ans = gss(s);
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