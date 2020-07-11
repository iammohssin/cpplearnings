#include <iostream>

using namespace std;

int main() {
    float product;
    float stateAns;
    float stateSale = .04;
    float countyAns;
    float countySale = .02;
    cout << "Enter Product price to calculate the sale tax: ";
    cin >> product;
    stateAns = product * stateSale ;
    countyAns = product * countySale;
    cout <<"The State sale tax on this purchase is:"<<stateAns<<"$" <<endl;
    cout <<"The County saale tax on this purchase is:"<<countyAns<<"$" <<endl;
    return 0;

}
