#include<iostream>
using namespace std;
class father
{
 public:
     void daddy()
     {
         cout<<"angry in nature father "<<endl;
     }
};
class mom:public father
{

  public:
      void mummy()
      {
          cout<<"calm mom"<<endl;

      }

};
class son: public mom
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
    obj.mummy();
    obj.daddy();// using scope  resolution operator we use method overloading;
    obj.behave();
    return 0;
}



