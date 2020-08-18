#include <iostream>
using namespace std;

double calculateRetail(double num1, double num2){
    return (num1 * num2) + num1;
}
double inputValid(double num){
    while (!(cin >> num )|| num <=0 )
        cout<<"Error! Enter above 0";
        cin.clear();
        cin.ignore(123, '\n');
        return num;
}
int main(){
    double wholeSaleCost, markupPercentage, retailPrice;
    cout<<"****************************************"<<endl;
    cout <<"Calculate markup on any item."<<endl;
    cout <<"Enter Wholesale price?"<<endl;
    wholeSaleCost = inputValid(wholeSaleCost);

    cout<<"Enter Markup Percentage?"<<endl;
    markupPercentage= inputValid(markupPercentage) * 0.01;

    retailPrice = calculateRetail(wholeSaleCost, markupPercentage);
    cout<<"Retail price is: "<<retailPrice<<endl;

    return 0;
}