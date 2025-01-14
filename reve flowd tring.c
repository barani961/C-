#include<iostream>
using namespace std;
int main()
{
    int n,k=n;
    cout<<"enter the no of rows to print floydtriangle pattern: ";
    cin>>n;
    for(int i=n;i>=1;i--)
    {

        for(int j=n;j>=i;j--)
        {

            cout<<k--<<" ";
        }cout<<endl;
    }
}
