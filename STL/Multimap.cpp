#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<char,int> Mul;
    Mul.insert(make_pair('a',1));           // similar key and similar value store multiple time and store in sorted order
    Mul.insert(make_pair('a',2));
    Mul.insert(make_pair('a',3));
    Mul.insert(make_pair('b',2));
    Mul.insert(make_pair('c',3));
    Mul.insert(make_pair('d',4));
    cout<<"Count->"<<Mul.count('a')<<endl;
    auto viki=Mul.find('a');
    cout<<"Find->"<<viki->first<<" "<<viki->second<<endl;
    auto lower= Mul.lower_bound('c');  //we can also use upper bound 
    cout<<"Bound->"<<lower->first<<" "<<lower->second<<endl; 
    for(auto &n:Mul)
    {
        cout<<n.first<<" "<<n.second<<endl;
    }
    auto range=Mul.equal_range('a');
    for(auto it=range.first; it!=range.second; it++)
    {
        cout<<it->first<<" "<<it->second<<endl;        //Video dobara dekhni pdegi
    }
}