#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"enter the string :";
    cin>>s;
    int flag=0;
    for(int i=0;i<(s.length()/2);i++)
    {
        int v=s.size();
        if(s[i]!=s[v-1-i])
            flag=1;
            break;
    }
    if(flag==0)
        cout<<"palindrome";
    else
        cout<<"not";




}


