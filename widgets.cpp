#include <iostream>

using namespace std;

int main() {

    float oneWidget = 9.2;
    int weightOfPallet , withWidgets;
    int weidgetsWight;
    int totalWidgets;

    cout << "Enter the pallet weight in pounds:";
    cin >> weightOfPallet;

    cout << "Enter pallet weight with widgets in pounds:";
    cin >> withWidgets;

    weidgetsWight = weightOfPallet - withWidgets;
    totalWidgets = weidgetsWight / oneWidget;

    totalWidgets = abs(totalWidgets);

    cout <<"Total widgets on pallet are:" <<totalWidgets<<endl;

    return 0;

}
