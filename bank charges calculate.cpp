#include <iostream>

using namespace std;

int main() {
    int balanceAsked, writtenChecks, total, totalCharges;
    cout<<"Program will calculate your bank charges"<<endl;
    cout <<"-----------------------------------------------"<<endl;

    cout << "Enter your available balance:";
    cin >> balanceAsked;
    cout << "Enter your written Check's:";
    cin >> writtenChecks;

    cout <<"-----------------------------------------------"<<endl;


    if (balanceAsked < 0) {
        cout << "Account is overdrawn" << endl;

    } else if (balanceAsked < 400) {
        cout << "Your balance is below 400$ bank charged 15$ extra." << endl;
    }

    if (writtenChecks < 0)
        cout << "Invalid input";
    else if (writtenChecks < 20)
        cout << "You have paid bank charges 10$\n and 0.10$ fee for each check for this month." << endl;
    else if (writtenChecks >= 20 && writtenChecks < 40)
        cout << "You have paid bank charges 10$\n and 0.08$ fee for each check for this month." << endl;
    else if (writtenChecks >= 40 && writtenChecks < 60)
        cout << "You have paid bank charges 10$\n and 0.06$ fee for each check for this month." << endl;
    else if (writtenChecks >= 60)
        cout << "You have paid bank charges 10$\n and 0.04$ fee for each check for this month." << endl;


    if (writtenChecks < 20) {
        total = 0.10 * writtenChecks;
        if (balanceAsked < 400) {
            totalCharges = total + 10 + 15;
            cout << "Total bank charges are " << totalCharges << "$." << endl;
        } else {
            total = 0.10 * writtenChecks;
            totalCharges = total + 10;
            cout << "Total bank charges are " << totalCharges << "$." << endl;

        }
    }
    if (writtenChecks >=20 && writtenChecks <40) {
        total = 0.08 * writtenChecks;
        if (balanceAsked < 400) {
            totalCharges = total + 10 + 15;
            cout << "Total bank charges are " << totalCharges << "$." << endl;
        } else {
            total = 0.08 * writtenChecks;
            totalCharges = total + 10;
            cout << "Total bank charges are " << totalCharges << "$." << endl;

        }
    }
    if (writtenChecks >=40 && writtenChecks <60){

        total = 0.06 * writtenChecks;
        if (balanceAsked < 400) {
        totalCharges = total + 10 + 15;
        cout << "Total bank charges are " << totalCharges << "$." << endl;
    } else {
        total = 0.06 * writtenChecks;
        totalCharges = total + 10;
        cout << "Total bank charges are " << totalCharges << "$." << endl;

    }
    }
    if (writtenChecks >=60){

        total = 0.04 * writtenChecks;
        if (balanceAsked < 400) {
        totalCharges = total + 10 + 15;
        cout << "Total bank charges are " << totalCharges << "$." << endl;
    } else {
        total = 0.04 * writtenChecks;
        totalCharges = total + 10;
        cout << "Total bank charges are " << totalCharges << "$." << endl;

    }}

    cout <<"-----------------------------------------------"<<endl;




    return 0;
}