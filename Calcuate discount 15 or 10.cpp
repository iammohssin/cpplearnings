#include <iostream>

using namespace std;

int main()


{
	double amount, discount, netpayable;
	amount = 0;
	discount = 0;
	netpayable = 0;
	cout << "Enter the bill amount:";
	cin >> amount;

	if (amount > 5000)
	{
		discount = amount * (15.0 / 100);
		netpayable = amount - discount;
		cout << "Discount at 15% is:" << discount << endl;
		cout << "Payable amount is:" << netpayable;
	}
	else
	{
		discount = amount * (10.0 / 100);
		netpayable = amount - discount;
		cout << "Discount is at 10% is:" << discount << endl;
		cout << "Payable amount is:" << netpayable;
	}

}