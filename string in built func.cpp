#include<iostream>
using namespace std;
int main()
{
string firstName;
string lastName;
getline(cin>>ws,firstName);
string new_;
if (new_.empty())
{
    cout<<"ooops ! no value for new_"<<endl;
}
string fullName = firstName.append(lastName);
string newName=firstName+lastName;
cout<<newName<<endl;
cout << fullName<<endl;
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "The length of the txt string is: " << txt.length()<<endl;
cout << "The length of the txt string is: " << txt.size()<<endl;
}
