#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a ,b;
    cout <<"Enter 1st Number to check which number is smaller or bigger:"<<endl;
    cin >>a ;
    cout <<"Enter 2nd number:"<<endl;
    cin >> b;

    if (a > b) {
        cout << a << " is bigger then "<<b;

    }
    else
        cout <<b<<" is bigger then "<<a ;

    return 0;
}