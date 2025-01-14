#include<iostream>
#include<string>
using namespace std;

class sample
{
    public:
    bool check(int n)
    {
        if(n<=0)
            return false;
        if(n==1)
            return true;
        while (n%2==0)
            n/=2;
        while (n%3==0)
            n/=3;
        while (n%5==0)
            n/=5;
        if(n==1)
            return  false;
    };
    int main()
    {

        sample obj;
        int n;
        cin>>n;
        obj.check(n)?"true":"false";
        return 0;
    }









};












