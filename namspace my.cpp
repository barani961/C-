#include<iostream>
namespace one
{
    std::string first="hi im from  one namespace";
    std::string second="hi im also from one namepace";
}
namespace two
{
    std::string second ="hi im from second";
    std::string first="hi im from second";
}
using namespace two;
int main()
{
    
    
    
    std::cout<<first<<std::endl;
    std::cout<<second<<std::endl;
}
