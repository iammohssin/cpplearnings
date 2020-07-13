#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int num;

    cout <<"Enter a Number 1 to 10 to check Roman numeral:"<<endl;
    cin >>num;

    switch (num) {
        case 1:
            cout <<"Roman numeral for "<<num<<" is I"<<endl;
            break;
        case 2:
            cout <<"Roman numeral for "<<num<<" is II"<<endl;
            break;
        case 3:
            cout <<"Roman numeral for "<<num<<" is III"<<endl;
            break;
        case 4:
            cout <<"Roman numeral for "<<num<<" is IV"<<endl;
            break;
        case 5:
            cout <<"Roman numeral for "<<num<<" is V"<<endl;
            break;
        case 6:
            cout <<"Roman numeral for "<<num<<" is VI"<<endl;
            break;
        case 7:
            cout <<"Roman numeral for "<<num<<" is VII"<<endl;
            break;
        case 8:
            cout <<"Roman numeral for "<<num<<" is VII"<<endl;
            break;
        case 9:
            cout <<"Roman numeral for "<<num<<" is IX"<<endl;
            break;
        case 10:
            cout <<"Roman numeral for "<<num<<" is X"<<endl;
            break;

        default:
            cout <<"You did not entered correct number\nrestart program and enter number from 1 to 10";
            break;

    }

    return 0;
}