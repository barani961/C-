#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no of rows to print floydtriangle pattern: ";
    cin>>n;
    int k;
    cout<<"enter the no to print for rows";
    cin>>k;
    for(int i=0;i<n;i++)
    {

        for(int j=n-i;j>0;j--)
        {

            cout<<k--<<" ";
        }cout<<endl;
    }
}
