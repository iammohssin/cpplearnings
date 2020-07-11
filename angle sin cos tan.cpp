#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    double angle;

    cout <<"Enter angle to get sin cos and tan:";
    cin >> angle;

    cout <<setprecision(4)<< "The sin is:"<<sin(angle)<<endl;
    cout <<setprecision(4)<< "The cos is:"<<cos(angle)<<endl;
    cout <<setprecision(4)<< "The tan is:"<<tan(angle)<<endl;



    return 0;
}