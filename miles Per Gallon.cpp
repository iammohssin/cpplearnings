#include <iostream>

using namespace std;

int main() {

    float milesTravel = 350,
            totalGallon = 12;

    float mpg = milesTravel / totalGallon;

    cout << "A car that holds 12 gallons of gas and that \n";
    cout << "can travel 350 miles before refuling will \n";
    cout << "use " << mpg << " Miles Per Gallon.\n";
    cout << endl;

    return 0;

}
