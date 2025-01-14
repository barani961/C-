#include<iostream>
using namespace std;
class addition
{
 public:
      void add(int a, int b)
     {
        cout<< a+b<<endl;
     }
     void add(int a, int b, int c)
     {
     cout<< a+b+c<<endl;
     }
     void add(int a, int b, int c,int d)
     {
    cout<<a+b+c;
     }


};
int main()
{
    addition obj;
    obj.add(2,3);
    obj.add(4,5,6,5);

    return 0;
}
/*
#include<iostream>
using namespace std;
class father
{
 public:
     void behave()
     {
         cout<<"angry in nature father "<<endl;
     }
};
class mom
{

  public:
      void behave()
      {
          cout<<"calm mom"<<endl;

      }

};
class son: public father, public mom
{
public:
    string charact="not mature enough";
    void behave()
    {

        cout<<"im son bro!";
    }


};
int main()
{
    son obj;
    obj.father::behave();
    obj.mom::behave();// using scope  resolution operator we use method overloading;
    obj.son::behave();
    return 0;
}
*/

