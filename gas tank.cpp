#include <iostream>

using namespace std;

int main() {

    float gasGallons = 20;
    float onHighway =26.8;
    float inTown = 21.5;
    float distanceTown = gasGallons * inTown;
    float distanceHighway = gasGallons * onHighway;
    cout << "Distance can be travel in town is "<<distanceTown<<" Miles"<<endl<< "and On highway "<<distanceHighway<< " Miles";
    return 0;

}
