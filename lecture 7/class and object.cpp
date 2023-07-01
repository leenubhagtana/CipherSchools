#include<iostream>
using namespace std;
class student
{
    string passcode;
public:
    string name;
    int id;
    void into()
    {
        cout<<"My name is "<<name<<"Id is "<<id<<"passcode is "<<passcode;
    }
    void setpass(string s)
    {
        passcode=s;
    }
};
int main()
{
    student s1;
    s1.name="mohit";
    s1.id=1;
    s1.setpass("001");
    s1.into();
    return 0;
}
