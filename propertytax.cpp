#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float propertyValue, percent60;
    float tax = 0.64;
    float propertyTax;
    cout << "Enter Property Value:";
    cin >> propertyValue;
    percent60 = propertyValue * 0.60;
    propertyTax = percent60 / 100 * tax;

    cout <<"Property value is "<< propertyValue <<"$ and property tax on it is "<<setprecision(4)<<showpoint<<propertyTax<<"$";
    return 0;

}
