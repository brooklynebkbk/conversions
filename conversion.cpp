#include <iostream>
#include <string>
using namespace std;

int main(){
  const double toInches = 12;
  const double toMetric = 2.54;
  int f, i;
  cout << "Please input a measurment in feet and inches."<< endl;
  cout << "Feet: " << endl;
  cin >> f;
  cout << "Inches: " << endl;
  cin >> i;
  cout << f << " feet and " << i << " inches is equivalent to " << ((f*toInches)+i)*toMetric << " centimeters." << endl;

  return 0;
}
