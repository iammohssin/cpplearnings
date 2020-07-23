#include <iostream>

using namespace std;

int main() {
    //Input validation with While loop
    int number;
    cout <<"Enter A number in range 10-25:";
    cin >>number;
    while (number <10 || number >25){

        cout <<"Error! please renter valid number in range of 10-25:";
        cin>>number;
    }


    cout<<"You entered "<<number;

    return 0;
    }