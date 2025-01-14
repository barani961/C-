#include <iostream>
using namespace std;

// Global variable x
int x = 5;

void myFunction() {
  cout << ++x << "\n"; // Increment the value of x by 1 and print it
}

int main() {
  myFunction();

  cout << x;  // Print the global variable x
  return 0;
}
