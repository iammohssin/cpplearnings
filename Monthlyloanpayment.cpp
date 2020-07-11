#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    float loanAmount, monInterestRate, noOfPays, amountPaidBack, interestPaid, payment;
    int monthlyInterestRate = 1;

    cout << "Enter Loan Amount:";
    cin >> loanAmount;

    cout << "Enter no of Payments:";
    cin >> noOfPays;

    cout << "Enter monthly interest rate:";
    cin >> monInterestRate;

    monInterestRate /= 12;

    monInterestRate /=100;

    payment =((monInterestRate) * pow(1 + (monInterestRate), noOfPays) / (pow(1 + (monInterestRate), noOfPays) - 1)) * loanAmount;
  

    amountPaidBack = payment * noOfPays;
    interestPaid = amountPaidBack - loanAmount;

    cout <<"Loan amount:                    "<<loanAmount<<"$"<<endl;
    cout <<"Monthly interest rate:          "<<monthlyInterestRate<<"%"<<endl;
    cout <<"No of payments:                 "<<noOfPays<<endl;
    cout <<"Monthly payment:                "<<payment<<"$"<<endl;
    cout <<"Amount paid Back:               "<<amountPaidBack<<"$"<<endl;
    cout <<"Interest paid:                  "<<interestPaid<<"$"<<endl;



    return 0;
}