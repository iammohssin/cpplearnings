#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    float amount, principal, rate, t;
    float total;

    cout<< "Enter principal amount:";
    cin >> principal;

    cout<< "Enter Interest rate:";
    cin >>rate;

    cout<< "Enter number of times the interest is compounded during a year:";
    cin >>t;
    rate /=100;
    amount = principal * pow(1 + (rate / t),t);
    total = amount - principal;
    
    cout << amount;


}
