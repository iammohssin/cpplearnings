#include <iostream>

using namespace std;

int main() {
    float mealCharge;
    float taxOnMeal = .0675;
    float tip =.015;
    float totalTaxOnMeal;
    float tipOnMeal;
    float totalBil;
    cout << "Enter the total Meal Charges:";
    cin >> mealCharge;
    totalTaxOnMeal = mealCharge * taxOnMeal;
    tipOnMeal = mealCharge * tip;
    totalBil = mealCharge + tipOnMeal + totalTaxOnMeal;
    cout << "Tax on this meal is:"<<totalTaxOnMeal<<"$"<<endl;
    cout <<"Tip on this meal is:"<<tipOnMeal<<"$"<<endl;
    cout <<"Total Payable Bill is:"<<totalBil<<"$"<<endl;

    return 0;

}
