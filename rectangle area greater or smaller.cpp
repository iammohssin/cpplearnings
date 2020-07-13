#include <iostream>
using namespace std;

int main(){
    double width1st, length1st, width2nd, length2nd;
    double area1, area2;

    cout <<"Enter 1st Rectangle width:"<<endl;
    cin >>width1st;
    cout <<"Enter 1st Rectangle length:"<<endl;
    cin >>length1st;


    cout <<"Enter 2nd Rectangle width:"<<endl;
    cin >>width2nd;
    cout <<"Enter 2nd Rectangle length:"<<endl;
    cin >>length2nd;

    area1 = length1st * width1st;
    area2 = length2nd * width2nd;

    cout <<"1st rectangle area is:"<<area1<<endl;


    cout <<"2nd rectangle area is:"<<area2<<endl;

    if (area1 > area2){
    cout <<"1st rectangle area is greater then 2nd."<<endl;
    }
    else
        cout <<"2nd rectangle area is greater then 1st."<<endl;

    return 0;
}