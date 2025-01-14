#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    void display()
    {

        cout<<"hi there "<<name<<endl;

    }

};
int main()
{
    Student obj1;
    obj1.name="barani";
    Student obj2;
    obj2.name="john";
    obj2.display();
    obj1.display();
    return 0;

}
