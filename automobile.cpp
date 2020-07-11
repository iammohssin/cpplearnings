#include <iostream>

using namespace std;

int main() {
    //automobile costs
    float loan, insurance, gas, oil, tires, maintenance;
    float totalExpanseMonthly, totalExpanseYearly;

    cout << "Enter loan payment monthly expense in $:"<<endl;
    cin >> loan;

    cout << "Enter insurance amount monthly paid in $:"<<endl;
    cin >> insurance;

    cout << "Enter gas expense monthly in $:"<<endl;
    cin >> gas;

    cout << "Enter oil expense monthly in $:"<<endl;
    cin >> oil;

    cout << "Enter tires expense monthly in $:"<<endl;
    cin >> tires;

    cout << "Enter maintenance charges monthly in $:"<<endl;
    cin >> maintenance;

    totalExpanseMonthly = loan + insurance + gas + oil + tires + maintenance;
    totalExpanseYearly = totalExpanseMonthly * 12;

    cout <<"Your total monthly expanses are "<<totalExpanseMonthly<<"$ and "<<"Yearly expanses are "<<totalExpanseYearly<<"$";

    return 0;

}
