#include<iostream>
using namespace std;
void bakepi(string ,string);
void bakepi(string);//function overloading
int main(){
    string a="pizza";
    string b="burger";
    bakepi(a,b);
    bakepi(a);
}
void bakepi(string a,string b)
{
    cout<<"here is your"<<a<<" and "<<b<<endl;
}
void bakepi(string a)
{
    cout<<"here is your"<<a;
}
