#include <iostream>

using namespace std;

int main() {
    const int packagePrice = 99;
    int unitsSold, costOfPurchase;
    int discount;

    cout << "Enter total sold units:";
    cin >> unitsSold;
    if (unitsSold <= 0) {
        cout << "Error! Restart program and enter correct number";
    } else {

        costOfPurchase = unitsSold * packagePrice;
        cout << "Total cost of purchase on " << unitsSold << " units is:" << costOfPurchase << "$" << endl;

        if (unitsSold >= 10 && unitsSold < 20) {
            discount = 20 * costOfPurchase / 100;
            cout << "Discount on " << unitsSold << " units are " << discount << "$" << endl;
        } else if (unitsSold >= 20 && unitsSold < 50) {
            discount = 30 * costOfPurchase / 100;
            cout << "Discount on " << unitsSold << " units are " << discount << "$" << endl;
        } else if (unitsSold >= 50 && unitsSold < 100) {
            discount = 40 * costOfPurchase / 100;
            cout << "Discount on " << unitsSold << " units are " << discount << "$" << endl;
        } else if (unitsSold > 100) {
            discount = 50 * costOfPurchase / 100;
            cout << "Discount on " << unitsSold << " units are " << discount << "$" << endl;
        }


        return 0;
    }
}