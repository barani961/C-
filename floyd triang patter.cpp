#include<iostream>
using namespace std;
int main()
{
    int n,k=1;
    cout<<"enter the no of rows to print floydtriangle pattern: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<=i;j++)
        {

            cout<<k++<<" ";
        }cout<<endl;
    }
}
