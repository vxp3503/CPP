#include<iostream>
using namespace std;
class Temp
{
    public:
     void name()
    {
        cout<<"I am temp";
    }
};
class Temp1 : public Temp{
    public:
    void name()
    {
        cout<<"My name is temp1";
    }
};
int main()
{
    Temp1  t1;
    t1.name();
}