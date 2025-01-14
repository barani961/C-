#include <iostream>
#include <string>
using namespace std;

int main() {
   union{
    string brand;
    string model;
    string car_plate;
    int year;
  } myCar1, myCar2; // We can add variables by separating them with a comma here

  // giving data into the first structure
  myCar1.brand = "BENZ";
  myCar1.model = "A5";
  myCar1.year = 2019;
  myCar1.car_plate="PY0345";

  // giving data into the second structure
  myCar2.brand = "RENAULT";
  myCar2.model = "F9";
  myCar2.year = 1969;
  myCar2.car_plate="TN8796";

  // Print the structure members
  cout <<"CAR 1:\n"<< "brand:"+myCar1.brand << "\n" << "model: "+myCar1.model << "\n" <<"year:"<< myCar1.year << "\n"<<"plate: "+myCar1.car_plate<< "\n";
  cout <<"\n\n"<<"CAR 2:\n"<< "brand:"+myCar2.brand << "\n" <<"model:"+myCar2.model << "\nyear:" << myCar2.year << "\n"<< "plate:"+myCar2.car_plate;
  return 0;
}
