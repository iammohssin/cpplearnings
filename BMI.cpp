#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float weight, height;
    float BMI;

    cout <<" Enter your weight in pounds";
    cin >> weight;
    cout <<" Enter your height in inches";
    cin >> height;

    BMI = weight * (703 / pow(height, 2));

    cout << "Your body mass index is "<<BMI<<endl;

    if (BMI <= 18.5)
        cout <<"You are underweight."<<endl;
    else if (BMI >= 25)
        cout <<"You are overweight."<<endl;
    else
        cout <<"Optimal weight.";
    return 0;
}