#include<iostream>
using namespace std;
class student
{
    string passcode;
public:
    string name;
    int id;
    student()
    {
    }
    student(string passcode,string name,int id)
    {
       this-> name =name;
        this->id =id;
        this->passcode=passcode;
    }
    void into()
    {
        cout<<"My name is "<<name<<"Id is "<<id<<"passcode is "<<passcode;
    }
    void setpass(string s)
    {
        passcode=s;
    }
    ~student()
    {

    }
};
int main()
{
    student s1;
    student s2("10","mohit",1);
    s2.into();

    return 0;
}

