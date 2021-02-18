#include<bits/stdc++.h>
using namespace std;
class viki{
    public: 
    int age;
    string name;
    bool operator <  (const viki &n) const{return age<n.age;}
    bool operator >  (const viki &n) const{return age>n.age;}

};
int main()
{
    cout<<"Keep data in sorted order and unique elements";
    set<viki> Set= {{18,"Vikrant"},{67,"Naresh"}}; // we can use here greater also the second statement of operator is going to used 
    for(const auto& z:Set)
    {
        cout<<z.age<<" "<<z.name<<endl;
    }
    cout<<Set.size();
}