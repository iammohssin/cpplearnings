#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string month1, month2, month3;

    int rainAmount1, rainAmount2, rainAmount3;

    float avgRain;

    cout << "Enter 1st month name:"<<endl;
    cin >> month1;

    cout << "Enter rain amount in inches for " << month1 << endl;
    cin >> rainAmount1;

    cout << "Enter 2nd month name:"<<endl;
    cin >> month2;

    cout << "Enter rain amount in inches for " << month2 << endl;
    cin >> rainAmount2;

    cout << "Enter 3rd month name:" << endl;
    cin >> month3;

    cout << "Enter rain amount in inches for " << month3 << endl;
    cin >> rainAmount3;

    avgRain = (rainAmount1 + rainAmount2 + rainAmount3) / 3;

    cout <<showpoint << "The average rainfall for " << month1 <<" "<< month2 << " and " << month3 << " is " << avgRain << " inches.";

    return 0;

}
