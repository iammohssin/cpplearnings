#include <iostream>

using namespace std;

int main() {

    const float replaceStructure = 0.80;
    float replacementCost;
    int insuranceAmount;

    cout << "Enter Replacement cost for your building:";
    cin >> replacementCost;
    insuranceAmount = replacementCost * replaceStructure;
    cout << "You should buy "<<insuranceAmount<< " Lac's insurance amount for replacement of structure.";

    return 0;

}
