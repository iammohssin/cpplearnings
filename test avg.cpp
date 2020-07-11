#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main() {
    float test1,test2,test3,test4,test5;
    cout <<"Enter Test 1 score :"<<endl;
    cin >> test1;
    cout <<"Enter Test 12 score :"<<endl;
    cin >> test2;

    cout <<"Enter Test 3 score :"<<endl;
    cin >> test3;

    cout <<"Enter Test 4 score :"<<endl;
    cin >> test4;

    cout <<"Enter Test 5 score :"<<endl;
    cin >> test5;
    float avg = (test1+test2+test3+test4+test5) / 5;
    cout <<setprecision(1) <<fixed <<showpoint << "Average test score is "<< avg << endl;


    return 0;
}
