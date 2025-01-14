#include<iostream>
using namespace std;
int main()
{
string myString = "Hello";
cout << myString; // Outputs Hello

cout << myString.at(0)<<endl;  // First character
cout << myString.at(1)<<endl;  // Second character
cout << myString.at(myString.length() - 1)<<endl;  // Last character

myString.at(0) = 'J';
myString.insert(1,"#");
cout<<"char e at position:"<<myString.find("e")<<endl;
cout << myString<<endl;  // Outputs Jello
myString.clear();
cout<<myString;
string name="barnidharan";
name.erase(0,4);
cout<<name;
}
