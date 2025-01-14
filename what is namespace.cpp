#include<iostream>

 namespace val
{

    int x=5;
}
namespace val2
{

    int x=4;
}
int main()
{

    int x=15;
    std::cout<<x<<std::endl;
    std::cout<<val2::x<<std::endl;
    std::cout<<val::x;
}
