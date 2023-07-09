#include<iostream>
using namespace std;
class student
{
    string passcode;
    friend class bestfriend;
protected:
    int age;
public:
    string name;
    int id;
    student()
    {

    }
    student(int i,string n,string p,int a)
    {
        name =n;
        id=i;
        passcode=p;
        age=a;
    }
    friend void hacker(student s);


};

void hacker(student s)
{
    cout<<s.passcode<<s.age<<endl;
}
class bestfriend
{
public:
    void sec(student s)
    {
        cout<<s.passcode<<" "<<s.age<<endl;
    }
};
int main()
{

    student s1(10,"mohit","001",1);
    student s2;
    s2=s1;
    bestfriend bff;
    bff.sec(s1);


    return 0;
}
