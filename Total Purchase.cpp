#include <iostream>

using namespace std;

int main() {
    float item1 =12.95;
    float item2 =24.95;
    float item3 =6.95;
    float item4 =16.95;
    float item5 =3.95;
    float totalSale = item1+item2+item3+item4+item5;
    float saleTax = totalSale* .06;
    float totalBill = totalSale + saleTax;
    cout << "Items List/Price:\n"<<item1<<"$"<<endl<<item2<<"$"<<endl<<item3<<"$"<<endl<<item4<<"$"<<endl<<item5<<"$"<<endl;
    cout << "Total Sale:"<<totalSale<<"$"<<endl;
    cout << "Sale Tax:"<<saleTax<<"$"<<endl;
    cout << "Your Total Bill is:"<<totalBill<<"$"<<endl;

    return 0;

}
