#include <iostream>

using namespace std;

int main() {
    double payAmount, payPeriods, annualPay;
    cout << "Enter the pay amount in a Period:";
    cin >> payAmount;
    cout << "Enter total periods in a year:";
    cin >> payPeriods;
    annualPay = payPeriods*payAmount;
    cout << "Your Annual Pay is:"<<annualPay<<"$";
    
    return 0;

}
