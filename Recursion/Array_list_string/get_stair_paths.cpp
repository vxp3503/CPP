#include<bits/stdc++.h>
using namespace std;
vector<string> solution(int n)
{
    if(n==0)
    {
        vector<string>zero;
        zero.push_back("");
        return zero;
    }
    else if(n<0)
    {
        vector<string>one;
        return one;
    }
    vector<string>path1=solution(n-1);
    vector<string>path2=solution(n-2);
    vector<string>path3=solution(n-3);
    vector<string>ans;
    for(int i=0;i<path1.size();i++)
    {
        ans.push_back("1"+path1[i]);
    }
    for(int i=0;i<path2.size();i++)
    {
        ans.push_back("2"+path2[i]);
    }
    for(int i=0;i<path3.size();i++)
    {
        ans.push_back("3"+path3[i]);
    }
    return ans;
}
int main()
{
    int  n;
    cin >> n;
    vector<string> ans = solution(n);
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