#include <iostream>
//#include <iomanip>


int main() {

    float stateSale = 0.4;
    float countySale =0.2;
    float sale, totalSaleTax, stateSaleTax, countySaleTax;
    int year;
    cout << "Enter year:";
    cin >>year;
    cout << "Enter total sale yearly:";
    cin >> sale;
    stateSaleTax = (sale /100) * stateSale;
    countySaleTax = (sale / 100) * countySale;
    totalSaleTax = stateSaleTax+ countySaleTax;
    abs(totalSaleTax);

    cout << "Total Sale of "<<year<<" is "<<sale<<"$ and total sale tax is "<<
    totalSaleTax <<"$ and "<< "State sale is "<<stateSaleTax
    <<"$ and county sale is "<< countySaleTax<<"$";


    return 0;

}
