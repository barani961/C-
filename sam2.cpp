#include<iostream>
using namespace std;
class addition
{
 public:
     int a,b,c;
     int display(int a,int b)
     {

         cout<<"the addition of "<<a<< " and "<<b<<" is:"<<a+b<<endl;

     }
     void get()
     {
        cout<<"\nenter the two values of a,b:";
        cin>>a>>b;
        display(a,b);

     }
};
int main()
{
    addition obj;
    obj.get();
    obj.get();
    return 0;
}

