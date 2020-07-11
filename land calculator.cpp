#include <iostream>
using namespace std;
int main() {
    float totalArea;
    float bro;
    float sis;
    int noOfBro;
    int noOfSis;
    cout <<"Enter total Land area in marla:";
    cin >> totalArea;
    cout <<"Enter no of total brothers";
    cin >> noOfBro;
    cout <<"Enter no of total Sisters";
    cin >> noOfSis;
    for (int i = 0; i < noOfBro; i++ ) {
        bro = totalArea *0.2;
        cout << "brother will get:" << bro << " Marla" << endl;
    }
        for (int j =0; j < noOfSis; j++) {
            sis = bro / noOfSis;
            cout <<"sister will get:"<< sis<<" Marla" <<endl;
        }


    return 0;
}
