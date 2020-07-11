#include <iostream>

using namespace std;

int main() {
    //Celsius to Fahrenheit Converter

    float celsius, fahrenheit;

    cout << "Enter temperature in celsius to convert it to fahrenheit:";
    cin >> celsius;

    fahrenheit = (celsius * 9/5) + 32;

    cout <<"Temperature in Fahrenheit is:"<<fahrenheit<<"F";



    return 0;

}
