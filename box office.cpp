#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    const int adultTicket = 6, childTicket= 3;
    string movieName;
    int adultTicketSold, childTicketSold;
    float adultTotal, childTotal;
    float grossBoxOfficeProfit, netBoxOfficeProfit, distributorShare;

    cout << "Enter Movie Name:"<<endl;
    cin >> movieName;

    cout <<"How many adult tickets sold?"<<endl;
    cin >> adultTicketSold;
    cout << "How many child tickets sold?"<<endl;
    cin >>childTicketSold;

    adultTotal= adultTicket * adultTicketSold;
    childTotal= childTicket * childTicketSold;

    grossBoxOfficeProfit = adultTotal + childTotal;

    netBoxOfficeProfit = grossBoxOfficeProfit * 0.20;

    distributorShare = grossBoxOfficeProfit - netBoxOfficeProfit;

    cout <<"Movie name:                   "<< movieName<<endl;
    cout <<"Adult Tickets sold:           "<<adultTicketSold<<endl;
    cout <<"Child Ticket sold:            "<<childTicketSold<<endl;
    cout <<"Gross Box Office profit:      "<<grossBoxOfficeProfit<<"$"<<endl;
    cout <<"Net Box Office profit:        "<<netBoxOfficeProfit<<"$"<<endl;
    cout <<"Amount paid to Distributor:   "<<distributorShare<<"$"<<endl;


    return 0;

}
