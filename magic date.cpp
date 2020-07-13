#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int month, day, year;
    cout << "Enter month in number (eg: January = 1 or june = 6)"<<endl;
    cin >>month;
    cout << "Enter day in number 1 to 31 (eg: 1, 2, 3, 4, 5...)"<<endl;
    cin >>day;

    cout << "Enter year in 2 numbers (eg: 1960 = 60, 2019 = 19)"<<endl;
    cin >>year;

    string magic;

    magic = (month * day == year) ? "Magic" : "Not Magic";

    cout << "The date is "<<magic<<"."<<endl;

    return 0;
}