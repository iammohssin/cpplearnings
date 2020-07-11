#include <iostream>
#include <iomanip>
#include <cmath>



using namespace std;

int main() {
    float diaMeterOfPizza, eachSlice, noOfSlices, area, radius;
    eachSlice = 14.125;
    float pi = 3.14159;
    int peoples;
    int slicePerPerson = 4;
    float diameterOfPizzasToOrder;
    int totalSlices;
    float ans ;

    cout <<"Enter the Diameter of pizza in inches:"<<endl;
    cin >> diaMeterOfPizza;

    cout << "Enter no of peoples who will at the party:"<<endl;
    cin >> peoples;

    cout<< "Enter diameter of Pizzas to be order:"<<endl;
    cin>> diameterOfPizzasToOrder;
    totalSlices = peoples * slicePerPerson;
    radius = diaMeterOfPizza / 2;
    area = pi * pow(radius, 2);
    noOfSlices = area / eachSlice;

    ans = (diameterOfPizzasToOrder * peoples) /totalSlices;
    cout <<setprecision(1)<< "No of slices of this pizza is:"<< noOfSlices<<endl;

    cout <<"You have to order "<<ans<<" Pizzas for this party"<<endl;


    return 0;
}