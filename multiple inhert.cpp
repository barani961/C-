#include<iostream>
using namespace std;
class father
{
 public:
     void behaviour()
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
    void child()
    {

        cout<<"im son bro!";
    }


};
int main()
{
    son obj;
    obj.behave();
    obj.behaviour();
    obj.child();
    return 0;
}


