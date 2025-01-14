#include<iostream>

 namespace val
{           /*  namespace= provides a solution for preventing name conflicts in large projects.each
     entity needs a unique name.
     A namespace allows for identically named  entities as long as the namespaces are different     */

    int x=5;
}
namespace val2
{

    int x=4;
}
int main()
{
    using namespace val;


    std::cout<<x<<std::endl;
    std::cout<<val2::x<<std::endl;

}
