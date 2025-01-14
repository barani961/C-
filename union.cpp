#include <iostream>
#include <string>
using namespace std;


   union bb{

    int car_plate;
    int year;
  } a;  // We can add variables by separating them with a comma here



 int main() { // giving data into the first structure

  a.year = 2019;
  a.car_plate=0345;

  cout  <<"year:"<< a.year << "\n"<<a.car_plate<< "\n";

  return 0;
}
