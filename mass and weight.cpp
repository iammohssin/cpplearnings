#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double mass, weight;

    cout<<"Enter object's mass in kilograms:";
    cin >> mass;

    weight = mass * 9.8;

    cout <<"The object's weight in newtons is "<<weight<<endl;

    if (weight >= 1000)
        cout<< "Object is to heavy."<<endl;
    else if(weight <= 10)
        cout <<"Object is to light."<<endl;
    else
        cout <<"Optimal weight";

    return 0;
}