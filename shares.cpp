#include <iostream>

using namespace std;

int main() {
    float totalShares = 600;
    float sharePrice =21.77;
    float totalPriceOfShares = totalShares*sharePrice;
    float transactionCommission = totalPriceOfShares * .02;
    float totalWithCom = totalPriceOfShares + transactionCommission;
    cout <<"Total Shares Amount Without Commission is:"<<totalPriceOfShares<<"$"<<endl;
    cout<< "Total amount of Commission is:"<<transactionCommission<<"$"<<endl;
    cout << "Total amount of shares with commission is:"<<totalWithCom<<"$"<<endl;

    return 0;
}
