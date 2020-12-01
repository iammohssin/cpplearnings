#include <iostream>

using namespace std;

int main() {
    int a,b,c,d;
    cout<<"**********Sum and average calculator**********\n";
    cout<<"Enter First number:";
    cin>>a;
    cout<<"Enter First number:";
    cin>>b;
    cout<<"Enter First number:";
    cin>>c;
    cout<<"Enter First number:";
    cin>>d;

    int sum = a + b + c + d;
    int avg = sum / 4;
    cout << "Sum of all numbers is:"<<sum <<"\nThe Average is:"<<avg <<endl;
    return 0;

}
