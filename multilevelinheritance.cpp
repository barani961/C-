#include<iostream>
using namespace std;
class gf{
    public:
void d1(){
cout<<"1"<<endl;
};
};
class f:public gf{
public:
    void d2(){
    cout<<"2"<<endl;
    };
};
class s:public gf{
public:
    void d3(){
    cout<<"3"<<endl;
    };
};
int main(){
    s o;
    f o2;
    o.d3();
    o.d1();
    o2.d2();
    o2.d1();
}
