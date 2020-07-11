#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float propertyValue, percent60;
    float taxRate = 2.64;
    float propertyTax;
    float quarterlyPayable;
    cout << "Enter Property Value:";
    cin >> propertyValue;
    percent60 = propertyValue * 0.60;
    propertyTax = percent60 / 100 * taxRate;
    quarterlyPayable = propertyTax / 3;

    cout <<"Property value is "<< propertyValue <<"$ and property tax on it is "<<setprecision(4)<<showpoint<<propertyTax<<"$"<<endl;
    cout <<"You can pay quarterly "<<quarterlyPayable<<"$";
    return 0;

}
