#include <iostream>
using namespace std;
template<typename T,typename U>
U max(T x, U y)//can change U to T
{
    return (x>y) ? x:y;//give any data type
}
int main()
{
    cout<<max(2,3.4);
}
