#include <iostream>
using namespace std;

int main(){
    float twoKgOrLess = 1.10,
    upto6kg=2.20,
    upto10Kg=3.70,
    upto20Kg=4.80;
    float one, two, three, four;
    one = twoKgOrLess / 500;
    two =upto6kg / 500;
    three =upto10Kg / 500;
    four =upto20Kg / 500;
    float weightOfPackage, distance;
    float milesRate;
    cout <<"C++ program to count Shipping Charges"<<endl;
    cout <<"*************************************"<<endl;
    cout<< "Enter the weight of package:"<<endl;
    cin>>weightOfPackage;
    cout <<"Enter distance:"<<endl;
    cin >>distance;
    cout <<"*************************************"<<endl;

    if(weightOfPackage <=0 || distance <=10)
        cout<<"Invalid input or we do not ship less then 10 miles."<<endl;
    else if(weightOfPackage > 20 && distance > 3000)
        cout<<"We can't ship over 20Kg weight"<<endl;
    else if (weightOfPackage <= 2 && (distance >10 && distance <=3000)){
        milesRate = distance * one;
        cout<<"you have to pay "<<milesRate<<"$ "<<"on "<<distance<<" Miles"<<endl;
    }
    else if(((weightOfPackage > 2) && weightOfPackage<= 6 ) &&(distance >10 && distance <=3000)) {
        milesRate = distance * two;
        cout << "you have to pay " << milesRate << "$ " << "on " << distance << " Miles" << endl;
    }
    else if(((weightOfPackage > 6) && weightOfPackage<= 10 ) &&(distance >10 && distance <=3000)) {
        milesRate = distance * three;
        cout << "you have to pay " << milesRate << "$ " << "on " << distance << " Miles" << endl;
    }
    else if(((weightOfPackage > 10) && weightOfPackage<= 20 ) &&(distance >10 && distance <=3000)) {
        milesRate = distance * four;
        cout << "you have to pay " << milesRate << "$ " << "on " << distance << " Miles" << endl;
    }

    return 0;
}