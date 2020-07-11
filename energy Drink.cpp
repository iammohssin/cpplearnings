#include <iostream>

using namespace std;

int main() {
    float recentlySurveyed = 12467;
    float perWeak = .14;
    float citrus = .64;
    int oneOrMore = recentlySurveyed * perWeak;
    int moreCitrus = recentlySurveyed * citrus;
    cout <<"The approximate number of customers who purchase one or more drinks in a weak are:"<<oneOrMore<<endl;
    cout <<"The approximate number of customers who purchase citrus drinks are:"<<moreCitrus<<endl;


    return 0;
}
