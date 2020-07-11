#include <iostream>
//#include <iomanip>
//#include <cmath>
//#include <cstdlib>
//#include <ctime>
//#include <fstream>

using namespace std;
int main() {

    float gallons, miles;
    float perGallon;
    cout << "Enter no of gallons of gas the car can hold:\n";
    cin >> gallons;
    cout <<"Enter no of miles that can be driven on a full tank:\n";
    cin >> miles;
    perGallon = miles / gallons;
    cout<< "Miles per gallon " << perGallon;
    return 0;
}
