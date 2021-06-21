#include<iostream>
#include<vector>

using namespace std;

// sr - source row
// sc - source column
// dr - destination row
// dc - destination column
vector <string> getMazePaths(int sr, int sc, int dr, int dc) {
    if(sr==dr&&sc==dc)
    {
        vector<string>zero;
        zero.push_back("");
        return zero;
    }
    vector<string>hpath;
    vector<string>vpath;
    if(sr<dr)
    {
        vpath=getMazePaths(sr+1,sc,dr,dc);
    }
    if(sc<dc)
    {
        hpath=getMazePaths(sr,sc+1,dr,dc);
    }
    vector<string>result;
    for(int i=0;i<hpath.size();i++)
    {
        result.push_back("h"+hpath[i]);
    }
    for(int i=0;i<vpath.size();i++)
    {
        result.push_back("v"+vpath[i]);
    }
    return result;
}

void display(vector<string>& arr){
    cout << "[";
    for(int i = 0;i < arr.size();i++){
        cout << arr[i];
        if(i < arr.size() -1) cout << ", ";
    }
    
    cout << "]"<<endl;
}


int main() {
    int n,m; cin >> n >> m;
    vector<string> ans = getMazePaths(0,0,n-1,m-1);
    display(ans);

    return 0;
}