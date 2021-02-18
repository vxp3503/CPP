#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    int age;
    string name;
    bool operator < (const Person &n) const{return age<n.age;}
    bool operator > (const Person &n) const{return age>n.age;}   //If greater is used
};
int main()
{
    cout<<"You can store duplicate sorted set of elements It can capability of object";
    multiset<Person> Mul ={{18,"Vikrant"},{67,"Naresh"}};
    Mul.insert({20,"ankita"});
    for(const auto &z:Mul)
    {
        cout<<z.age<<" " << z.name<<endl;
    }
}